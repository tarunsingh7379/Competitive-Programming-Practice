#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m, t;
    cin >> n >> m >> t;

    ll ncr[31][31];
    ncr[0][0] = 1;
    for (ll i = 1; i <= 30; i++)
    {
        ncr[i][0] = 1;
        ncr[i][i] = 1;
        for (ll j = 1; j < i; j++)
        {
            ncr[i][j] = ncr[i - 1][j - 1] + ncr[i - 1][j];
        }
    }
    ll ans = 0;
    for (ll b = 4; b <= n; b++)
    {
        ll g = t - b;
        if (g < 1 || g > m)
        {
            continue;
        }
        ans += ncr[n][b] * ncr[m][g];
    }
    cout << ans << endl;

    return 0;
}