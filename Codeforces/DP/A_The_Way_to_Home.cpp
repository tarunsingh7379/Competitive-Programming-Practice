#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int func(int ind, int n, int k, string &s, vector<int> &dp)
{
    if (ind == n - 1)
    {
        return 0;
    }
    if (dp[ind] != -1)
    {
        return dp[ind];
    }
    int ans = 1e7;
    for (int i = 1; i <= k; i++)
    {
        if (ind + i < n && s[ind + i] == '1')
        {
            ans = min(ans, 1 + func(ind + i, n, k, s, dp));
        }
    }
    return dp[ind] = ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<int> dp(n, -1);
    int ans = func(0, n, k, s, dp);
    if (ans >= 1e7)
        ans = -1;
    cout << ans << endl;

    return 0;
}