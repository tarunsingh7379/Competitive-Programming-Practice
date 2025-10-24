#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int dp[51][2][2][2];

bool is_alpha(char c)
{
    return c >= 'a' && c <= 'z';
}

bool is_digit(char c)
{
    return c >= '0' && c <= '9';
}

bool is_sp(char c)
{
    return c == '#' || c == '*' || c == '&';
}

int func(int ind, int alpha, int digit, int sp, vector<string> &v)
{
    if (alpha && digit && sp)
    {
        return 0;
    }
    if (ind >= v.size())
    {
        return 1e7;
    }
    if (dp[ind][alpha][digit][sp] != -1)
    {
        return dp[ind][alpha][digit][sp];
    }
    int ans = 1e7;
    for (int i = 0; i < v[ind].size(); i++)
    {
        ans = min(ans, min(i, (int)v[ind].size() - i) + func(ind + 1,
                                                             alpha | is_alpha(v[ind][i]),
                                                             digit | is_digit(v[ind][i]),
                                                             sp | is_sp(v[ind][i]), v));
    }
    return dp[ind][alpha][digit][sp] = ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    vector<string> v;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }
    memset(dp, -1, sizeof(dp));
    cout << func(0, 0, 0, 0, v) << endl;

    return 0;
}