#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int func(int ind, int last, vector<int> &a, vector<vector<int>> &dp)
{
    if (ind >= a.size())
    {
        return 0;
    }
    if (dp[ind][last] != -1)
    {
        return dp[ind][last];
    }
    int ans = 1e7;
    int opposite = 7 - last;
    for (int i = 1; i <= 6; i++)
    {
        if (i != last && i != opposite)
        {
            if (a[ind] == i)
                ans = min(ans, func(ind + 1, i, a, dp));
            else
                ans = min(ans, 1 + func(ind + 1, i, a, dp));
        }
    }
    return dp[ind][last] = ans;
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
        vector<vector<int>> dp(n, vector<int>(7, -1));
        cout << func(0, 0, a, dp) << endl;
        t--;
    }

    return 0;
}