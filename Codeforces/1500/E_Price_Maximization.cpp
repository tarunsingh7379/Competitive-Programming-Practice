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
        ll ans = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            ans = ans + a[i] / k;
            a[i] = a[i] % k;
        }

        sort(a.begin(), a.end());

        ll i = 0, j = n - 1;
        while (i < j)
        {
            if (a[i] + a[j] >= k)
            {
                ans++;
                i++;
                j--;
            }
            else
            {
                i++;
            }
        }

        cout << ans << endl;
        t--;
    }

    return 0;
}