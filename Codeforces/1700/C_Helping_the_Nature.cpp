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
        ll op = 0;
        for (ll i = 1; i < n; i++)
        {
            a[i] -= op;
            if (a[i] > a[i - 1])
            {
                ll d = a[i] - a[i - 1];
                a[i] -= d;
                op += d;
            }
        }
        ans += op;
        op = 0;
        for (ll i = n - 2; i >= 0; i--)
        {
            a[i] -= op;
            if (a[i] > a[i + 1])
            {
                ll d = a[i] - a[i + 1];
                a[i] -= d;
                op += d;
            }
        }
        ans += op;
        ans += abs(a[0]);
        cout << ans << endl;
        t--;
    }

    return 0;
}