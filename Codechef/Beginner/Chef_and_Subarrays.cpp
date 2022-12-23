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
            for (ll j = i; j < n; j++)
            {
                ll sum = 0, p = 1;
                for (ll k = i; k <= j; k++)
                {
                    sum = sum + a[k];
                    p = p * a[k];
                }
                if (sum == p)
                {
                    ans++;
                }
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}