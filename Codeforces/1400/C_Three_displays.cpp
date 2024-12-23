#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int dp[3005][3005][4];

int func(int ind, int last, int k, vector<int> &a, vector<int> &b)
{
    if (ind >= a.size())
    {
        if (k == 0)
        {
            return 0;
        }
        return 4e8;
    }
    if (dp[ind][last][k] != -1)
    {
        return dp[ind][last][k];
    }
    int ans = 4e8;
    if (last != 0)
    {
        if (a[ind] > a[last - 1] && k > 0)
        {
            ans = min(ans, b[ind] + func(ind + 1, ind + 1, k - 1, a, b));
        }
        ans = min(ans, func(ind + 1, last, k, a, b));
    }
    else
    {
        ans = min(ans, b[ind] + func(ind + 1, ind + 1, k - 1, a, b));
        ans = min(ans, func(ind + 1, last, k, a, b));
    }
    return dp[ind][last][k] = ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    memset(dp, -1, sizeof(dp));
    int ans = func(0, 0, 3, a, b);
    if (ans >= 4e8)
    {
        ans = -1;
    }
    cout << ans << endl;
    return 0;
}