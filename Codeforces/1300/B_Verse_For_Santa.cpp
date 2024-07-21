#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll ans = 0, sum = 0, ma = 0, ind = 0;
        for (ll i = 0; i < n; i++)
        {
            sum += a[i];
            if (a[i] > ma)
            {
                ma = a[i];
                ind = i;
            }
            if (sum > k)
            {
                if (sum - ma <= k)
                {
                    ans = ind + 1;
                }
            }
        }
        cout << ans << endl;

        t--;
    }

    return 0;
}