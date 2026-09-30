#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int func(int ind, int k, int n, vector<int> &a, vector<vector<int>> &dp)
{
    if (ind >= n)
        return 1;
    if (dp[ind][k] != -1)
        return dp[ind][k];
    int ans = 0;
    for (int j = 0; j <= k; j++)
    {
        ans = max(ans, (a[ind] + j) * func(ind + 1, k - j, n, a, dp));
    }
    return dp[ind][k] = ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t)
    {
        vector<int> a(3);
        for (int i = 0; i < 3; i++)
        {
            cin >> a[i];
        }
        vector<vector<int>> dp(3, vector<int>(6, -1));
        cout << func(0, 5, 3, a, dp) << endl;
        t--;
    }

    return 0;
}
