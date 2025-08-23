#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

ll dp[20][2][2][10][10];

ll func(int ind, int flag, int start, int first, int last, string &s)
{
    if (ind >= s.size())
    {
        if (start && first == last)
            return 1;
        return 0;
    }
    if (dp[ind][flag][start][first][last] != -1)
    {
        return dp[ind][flag][start][first][last];
    }
    int limit = s[ind] - '0';
    if (flag)
    {
        limit = 9;
    }
    ll ans = 0;
    for (int d = 0; d <= limit; d++)
    {
        if (d < s[ind] - '0')
        {
            if (start || d == 0)
            {
                ans += func(ind + 1, 1, start, first, d, s);
            }
            else
            {
                ans += func(ind + 1, 1, 1, d, d, s);
            }
        }
        else
        {
            if (start || d == 0)
            {
                ans += func(ind + 1, flag, start, first, d, s);
            }
            else
            {
                ans += func(ind + 1, flag, 1, d, d, s);
            }
        }
    }
    return dp[ind][flag][start][first][last] = ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll l, r;
    cin >> l >> r;
    string right = to_string(r), left = to_string(l - 1);
    memset(dp, -1, sizeof(dp));
    ll right_ans = func(0, 0, 0, 0, 0, right);
    memset(dp, -1, sizeof(dp));
    ll left_ans = func(0, 0, 0, 0, 0, left);
    ll ans = right_ans - left_ans;
    cout << ans << endl;

    return 0;
}