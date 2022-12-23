#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int dp[201][513];

int func(int ind, int ans, vector<int> &a, vector<int> &b)
{
    if (ind >= a.size())
    {
        return ans;
    }
    if (dp[ind][ans] != -1)
    {
        return dp[ind][ans];
    }
    int got = INT_MAX;
    for (auto num : b)
    {
        got = min(got, func(ind + 1, ans | (a[ind] & num), a, b));
    }
    return dp[ind][ans] = got;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    memset(dp, -1, sizeof(dp));
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    cout << func(0, 0, a, b) << endl;
    return 0;
}