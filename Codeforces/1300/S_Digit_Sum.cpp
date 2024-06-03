#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

// int dp[10001][100][2];

// int func(int ind, int sum, int flag, int n, int k, string &s)
// {
//     if (ind >= n)
//     {
//         if (sum == 0)
//         {
//             return 1;
//         }
//         return 0;
//     }
//     if (dp[ind][sum][flag] != -1)
//     {
//         return dp[ind][sum][flag];
//     }
//     int limit = s[ind] - '0';
//     if (flag)
//     {
//         limit = 9;
//     }
//     int ans = 0;
//     for (int d = 0; d <= limit; d++)
//     {
//         if (flag)
//         {
//             ans = (0LL + ans + func(ind + 1, (sum + d) % k, flag, n, k, s)) % M;
//         }
//         else
//         {
//             if (d < (s[ind] - '0'))
//                 ans = (0LL + ans + func(ind + 1, (sum + d) % k, 1, n, k, s)) % M;
//             else
//                 ans = (0LL + ans + func(ind + 1, (sum + d) % k, flag, n, k, s)) % M;
//         }
//     }
//     return dp[ind][sum][flag] = ans;
// }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    int k;
    cin >> k;
    int n = s.size();
    // memset(dp, -1, sizeof(dp));
    // int ans = (func(0, 0, 0, n, k, s) - 1 + M) % M;
    // cout << ans << endl;

    int dp[n + 1][k][2];
    memset(dp, 0, sizeof(dp));

    for (int ind = n - 1; ind >= 0; ind--)
    {
        for (int sum = k - 1; sum >= 0; sum--)
        {
            for (int flag = 1; flag >= 0; flag--)
            {
                int limit = s[ind] - '0';
                if (flag)
                {
                    limit = 9;
                }
                int ans = 0;
                for (int d = 0; d <= limit; d++)
                {
                    if (flag)
                    {
                        ans = (0LL + ans + dp[ind + 1][(sum + d) % k][flag]) % M;
                    }
                    else
                    {
                        if (d < (s[ind] - '0'))
                            ans = (0LL + ans + dp[ind + 1][(sum + d) % k][1]) % M;
                        else
                            ans = (0LL + ans + dp[ind + 1][(sum + d) % k][flag]) % M;
                    }
                }
                dp[ind][sum][flag] = ans;
            }
        }
    }

    int ans = (dp[0][0][0] - 1 + M) % M;
    cout << ans << endl;

    return 0;
}