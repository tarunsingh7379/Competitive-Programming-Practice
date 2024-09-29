#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m;
    cin >> n >> m;
    ll a[n][m];
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        ll cnt0 = 0, cnt1 = 0;
        for (ll j = 0; j < m; j++)
        {
            if (a[i][j] == 0)
            {
                cnt0++;
            }
            else
            {
                cnt1++;
            }
        }
        ans = ans + (1LL << cnt0) + (1LL << cnt1) - 2;
    }
    for (ll j = 0; j < m; j++)
    {
        ll cnt0 = 0, cnt1 = 0;
        for (ll i = 0; i < n; i++)
        {
            if (a[i][j] == 0)
            {
                cnt0++;
            }
            else
            {
                cnt1++;
            }
        }
        ans = ans + (1LL << cnt0) + (1LL << cnt1) - 2;
    }
    ans = ans - n * m;
    cout << ans << endl;

    return 0;
}