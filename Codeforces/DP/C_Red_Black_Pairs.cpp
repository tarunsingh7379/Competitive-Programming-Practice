#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int func(int ind, int n, vector<string> &v, vector<int> &dp)
{
    if (ind >= n)
    {
        return 0;
    }
    if (dp[ind] != -1)
    {
        return dp[ind];
    }
    int ans = 1e7;
    ans = min(ans, (v[0][ind] != v[1][ind]) + func(ind + 1, n, v, dp));
    if (ind + 1 < n)
    {
        ans = min(ans, (v[0][ind] != v[0][ind + 1]) + (v[1][ind] != v[1][ind + 1]) + func(ind + 2, n, v, dp));
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
        int n;
        cin >> n;
        vector<string> v(2);
        cin >> v[0] >> v[1];
        vector<int> dp(n, -1);
        cout << func(0, n, v, dp) << endl;
        t--;
    }

    return 0;
}