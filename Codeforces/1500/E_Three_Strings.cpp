#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int func(int i, int j, string &a, string &b, string &c, vector<vector<int>> &dp)
{
    int ind = i + j;
    if (ind >= c.size())
    {
        return 0;
    }
    if (dp[i][j] != -1)
    {
        return dp[i][j];
    }
    int ans = 1e8;
    if (i < a.size())
    {
        if (a[i] == c[ind])
        {
            ans = min(ans, func(i + 1, j, a, b, c, dp));
        }
        else
        {
            ans = min(ans, 1 + func(i + 1, j, a, b, c, dp));
        }
    }
    if (j < b.size())
    {
        if (b[j] == c[ind])
        {
            ans = min(ans, func(i, j + 1, a, b, c, dp));
        }
        else
        {
            ans = min(ans, 1 + func(i, j + 1, a, b, c, dp));
        }
    }
    return dp[i][j] = ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t)
    {
        string a, b, c;
        cin >> a >> b >> c;
        int n = a.size(), m = b.size();
        vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));
        cout << func(0, 0, a, b, c, dp) << endl;
        t--;
    }

    return 0;
}