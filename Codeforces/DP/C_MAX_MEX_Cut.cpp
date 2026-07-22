#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int dp[100005][2][2][2];

int get_mex(int a, int b, int c)
{
    if (a == 0)
        return 0;
    if (b == 0)
        return 1;
    return 2;
}

int is_equal(int ind, int val, vector<string> &a)
{
    return (a[0][ind] - '0' == val || a[1][ind] - '0' == val);
}

int func(int ind, int a, int b, int c, vector<string> &v)
{
    if (ind >= v[0].size())
    {
        return get_mex(a, b, c);
    }
    if (dp[ind][a][b][c] != -1)
        return dp[ind][a][b][c];
    int ans = 0;
    ans = max(ans, get_mex(a, b, c) + func(ind + 1, is_equal(ind, 0, v), is_equal(ind, 1, v), is_equal(ind, 2, v), v));
    ans = max(ans, 0 + func(ind + 1, is_equal(ind, 0, v) | a, is_equal(ind, 1, v) | b, is_equal(ind, 2, v) | c, v));
    return dp[ind][a][b][c] = ans;
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
        memset(dp, -1, sizeof(dp));
        cout << func(1, is_equal(0, 0, v), is_equal(0, 1, v), is_equal(0, 2, v), v) << endl;
        t--;
    }

    return 0;
}