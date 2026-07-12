#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int func(int ind, int x, int y, string &s, vector<int> &dp)
{
    if (ind >= s.size())
    {
        return 0;
    }
    if (dp[ind] != -1)
    {
        return dp[ind];
    }
    int ans = 1e9;
    if (s[ind] == '.')
    {
        if (ind + 1 < s.size() && s[ind + 1] == '.')
        {
            ans = min(ans, y + func(ind + 2, x, y, s, dp));
        }
        ans = min(ans, x + func(ind + 1, x, y, s, dp));
    }
    else
    {
        ans = min(ans, func(ind + 1, x, y, s, dp));
    }
    return dp[ind] = ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t)
    {
        int n, m, x, y;
        cin >> n >> m >> x >> y;
        vector<string> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            vector<int> dp(m, -1);
            ans += func(0, x, y, v[i], dp);
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}