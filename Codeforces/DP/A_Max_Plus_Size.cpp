#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int dp[101][1001][2];

int func(int ind, int ma, int last, vector<int> &a)
{
    if (ind >= a.size())
        return ma;
    if (dp[ind][ma][last] != -1)
        return dp[ind][ma][last];
    int ans = 0;
    if (last == 0)
    {
        ans = max(ans, 1 + func(ind + 1, max(ma, a[ind]), 1, a));
    }
    ans = max(ans, func(ind + 1, ma, 0, a));
    return dp[ind][ma][last] = ans;
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
        memset(dp, -1, sizeof(dp));
        cout << func(0, 0, 0, a) << endl;
        t--;
    }

    return 0;
}