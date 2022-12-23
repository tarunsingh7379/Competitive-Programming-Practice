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
        ll n;
        cin >> n;
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll ans = 0;
        for (ll i = 0; i < n; i++)
        {
            for (ll j = i + 1; j < n; j++)
            {
                ll p = a[i] * a[j];
                ll sum = 0;
                while (p)
                {
                    ll rem = p % 10;
                    sum = sum + rem;
                    p = p / 10;
                }
                ans = max(ans, sum);
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}