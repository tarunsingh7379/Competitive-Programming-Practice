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
        ll n, p, k;
        cin >> n >> p >> k;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        ll ans = 0, sum = 0, prefix_sum = 0;
        for (ll i = 0; i <= k; i++)
        {
            sum = prefix_sum;
            if (sum > p)
            {
                break;
            }
            ans = max(ans, i);
            for (ll j = i + k - 1; j < n; j += k)
            {
                sum += a[j];
                if (sum <= p)
                {
                    ans = max(ans, j + 1);
                }
            }
            prefix_sum += a[i];
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}