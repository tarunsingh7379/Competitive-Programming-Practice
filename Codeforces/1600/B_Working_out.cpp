#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);

    ll n, m;
    cin >> n >> m;
    vector<vector<ll>> a(n + 1, vector<ll>(m + 1));
    for (ll i = 1; i <= n; i++)
    {
        for (ll j = 1; j <= m; j++)
        {
            cin >> a[i][j];
        }
    }

    vector<vector<ll>> dp1(n + 2, vector<ll>(m + 2, 0));
    vector<vector<ll>> dp2(n + 2, vector<ll>(m + 2, 0));
    vector<vector<ll>> dp3(n + 2, vector<ll>(m + 2, 0));
    vector<vector<ll>> dp4(n + 2, vector<ll>(m + 2, 0));

    for (ll i = 1; i <= n; i++)
    {
        for (ll j = 1; j <= m; j++)
        {
            dp1[i][j] = a[i][j] + max(dp1[i - 1][j], dp1[i][j - 1]);
        }
    }

    for (ll i = n; i >= 1; i--)
    {
        for (ll j = m; j >= 1; j--)
        {
            dp2[i][j] = a[i][j] + max(dp2[i + 1][j], dp2[i][j + 1]);
        }
    }

    for (ll i = n; i >= 1; i--)
    {
        for (ll j = 1; j <= m; j++)
        {
            dp3[i][j] = a[i][j] + max(dp3[i + 1][j], dp3[i][j - 1]);
        }
    }

    for (ll i = 1; i <= n; i++)
    {
        for (ll j = m; j >= 1; j--)
        {
            dp4[i][j] = a[i][j] + max(dp4[i - 1][j], dp4[i][j + 1]);
        }
    }

    ll ans = 0;
    for (ll i = 2; i < n; i++)
    {
        for (ll j = 2; j < m; j++)
        {
            ans = max(ans, dp1[i - 1][j] + dp2[i + 1][j] + dp3[i][j - 1] + dp4[i][j + 1]);
            ans = max(ans, dp1[i][j - 1] + dp2[i][j + 1] + dp3[i + 1][j] + dp4[i - 1][j]);
        }
    }
    cout << ans << endl;

    return 0;
}