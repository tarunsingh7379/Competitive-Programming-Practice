#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

ll func(int ind, int prev, int n, int k, vector<vector<int>> &dp)
{
    if (ind >= k)
    {
        return 1;
    }
    if (dp[ind][prev] != -1)
    {
        return dp[ind][prev];
    }
    ll ans = 0;
    for (int i = 1; prev * i <= n; i++)
    {
        ans = (ans + func(ind + 1, i * prev, n, k, dp)) % M;
    }
    return dp[ind][prev] = ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    vector<vector<int>> dp(k, vector<int>(n + 1, -1));
    cout << func(0, 1, n, k, dp) << endl;

    return 0;
}