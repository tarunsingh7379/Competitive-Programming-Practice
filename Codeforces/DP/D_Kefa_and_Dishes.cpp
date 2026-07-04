#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

ll dp[19][(1 << 18)];

ll func(int last_bit, int taken, int n, int m, vector<int> &a, vector<vector<int>> &val)
{
    int cnt = 0;
    for (ll i = 0; i < n; i++)
    {
        cnt += !!(taken & (1 << i));
    }
    if (cnt == m)
        return 0;
    if (dp[last_bit][taken] != -1)
        return dp[last_bit][taken];
    ll ans = 0, cur = 0;
    for (ll i = 0; i < n; i++)
    {
        if (taken & (1 << i))
            continue;
        cur = a[i];
        cur += val[last_bit][i + 1];
        cur += func(i + 1, taken | (1 << i), n, m, a, val);
        ans = max(ans, cur);
    }
    return dp[last_bit][taken] = ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<vector<int>> val(n + 1, vector<int>(n + 1, 0));
    for (ll i = 0; i < k; i++)
    {
        int x, y, c;
        cin >> x >> y >> c;
        val[x][y] = c;
    }
    memset(dp, -1, sizeof(dp));
    cout << func(0, 0, n, m, a, val) << endl;

    return 0;
}