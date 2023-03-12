#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int func(int ind, int prev, int h, int l, int r, vector<int> &a, vector<vector<int>> &dp)
{
    if (ind >= a.size())
    {
        return 0;
    }
    if (dp[ind][prev] != -1)
    {
        return dp[ind][prev];
    }
    int ans = 0;
    int sleep = (prev + a[ind] - 1) % h;
    if (sleep >= l && sleep <= r)
    {
        ans = max(ans, 1 + func(ind + 1, sleep, h, l, r, a, dp));
    }
    else
    {
        ans = max(ans, func(ind + 1, sleep, h, l, r, a, dp));
    }
    sleep = (prev + a[ind]) % h;
    if (sleep >= l && sleep <= r)
    {
        ans = max(ans, 1 + func(ind + 1, sleep, h, l, r, a, dp));
    }
    else
    {
        ans = max(ans, func(ind + 1, sleep, h, l, r, a, dp));
    }
    return dp[ind][prev] = ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, h, l, r;
    cin >> n >> h >> l >> r;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<vector<int>> dp(n, vector<int>(h, -1));

    int ans = func(0, 0, h, l, r, a, dp);
    cout << ans << endl;

    return 0;
}