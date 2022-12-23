#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int func(int ind, int turn, int n, vector<int> &a, vector<vector<int>> &dp)
{
    if (ind >= n)
    {
        return 0;
    }
    if (dp[ind][turn] != -1)
    {
        return dp[ind][turn];
    }
    int ans = INT_MAX;
    if (turn == 0)
    {
        if (a[ind] == 0)
        {
            ans = min(ans, func(ind + 1, 1, n, a, dp));
            if (ind + 1 < n)
            {
                if (a[ind + 1] == 0)
                {
                    ans = min(ans, func(ind + 2, 1, n, a, dp));
                }
                else
                {
                    ans = min(ans, 1 + func(ind + 2, 1, n, a, dp));
                }
            }
        }
        else
        {
            ans = min(ans, 1 + func(ind + 1, 1, n, a, dp));
            if (ind + 1 < n)
            {
                if (a[ind + 1] == 0)
                {
                    ans = min(ans, 1 + func(ind + 2, 1, n, a, dp));
                }
                else
                {
                    ans = min(ans, 2 + func(ind + 2, 1, n, a, dp));
                }
            }
        }
    }
    else
    {
        ans = min(ans, func(ind + 1, 0, n, a, dp));
        if (ind + 1 < n)
        {
            ans = min(ans, func(ind + 2, 0, n, a, dp));
        }
    }
    return dp[ind][turn] = ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<vector<int>> dp(n, vector<int>(2, -1));
        int ans = func(0, 0, n, a, dp);
        cout << ans << endl;
        t--;
    }

    return 0;
}