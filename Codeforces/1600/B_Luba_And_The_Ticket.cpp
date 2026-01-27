#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int dp[6][50][50];

int func(int ind, int sum1, int sum2, string &s)
{
    if (ind >= 6)
    {
        if (sum1 == sum2)
            return 0;
        return 10;
    }
    if (dp[ind][sum1][sum2] != -1)
        return dp[ind][sum1][sum2];
    int ans = 1000;
    if (ind < 3)
    {
        for (int i = 0; i <= 9; i++)
        {
            if (i == (s[ind] - '0'))
            {
                ans = min(ans, 0 + func(ind + 1, sum1 + i, sum2, s));
            }
            else
            {
                ans = min(ans, 1 + func(ind + 1, sum1 + i, sum2, s));
            }
        }
    }
    else
    {
        for (int i = 0; i <= 9; i++)
        {
            if (i == (s[ind] - '0'))
            {
                ans = min(ans, 0 + func(ind + 1, sum1, sum2 + i, s));
            }
            else
            {
                ans = min(ans, 1 + func(ind + 1, sum1, sum2 + i, s));
            }
        }
    }
    return dp[ind][sum1][sum2] = ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    memset(dp, -1, sizeof(dp));
    cout << func(0, 0, 0, s) << endl;

    return 0;
}