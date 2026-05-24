#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

ll dp[2001][2][2001];

ll func(ll ind, ll flag, ll rem, ll m, ll k, string &s)
{
    if (ind >= s.size())
    {
        return (rem == 0);
    }
    if (dp[ind][flag][rem] != -1)
    {
        return dp[ind][flag][rem];
    }
    ll ans = 0;
    ll limit = s[ind] - '0';
    if (flag)
    {
        limit = 9;
    }
    if (ind % 2 != 0)
    {
        if (k <= limit)
        {
            if (k < s[ind] - '0')
            {
                ans = (ans + func(ind + 1, 1, (rem * 10 + k) % m, m, k, s)) % M;
            }
            else
            {
                ans = (ans + func(ind + 1, flag, (rem * 10 + k) % m, m, k, s)) % M;
            }
        }
    }
    else
    {
        for (ll d = 0; d <= limit; d++)
        {
            if (d == k)
            {
                continue;
            }
            if (d < s[ind] - '0')
            {
                ans = (ans + func(ind + 1, 1, (rem * 10 + d) % m, m, k, s)) % M;
            }
            else
            {
                ans = (ans + func(ind + 1, flag, (rem * 10 + d) % m, m, k, s)) % M;
            }
        }
    }
    return dp[ind][flag][rem] = ans;
}

bool check_left(string &s, ll m, ll k)
{
    ll rem = 0;
    for (ll i = 0; i < s.size(); i++)
    {
        rem = (rem * 10 + s[i] - '0') % m;
        if (i % 2 != 0 && s[i] - '0' != k)
        {
            return false;
        }
        else if (i % 2 == 0 && s[i] - '0' == k)
        {
            return false;
        }
    }
    return (rem == 0);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int m, k;
    cin >> m >> k;
    string a, b;
    cin >> a >> b;
    memset(dp, -1, sizeof(dp));
    ll right = func(0, 0, 0, m, k, b);
    memset(dp, -1, sizeof(dp));
    ll left = func(0, 0, 0, m, k, a);
    ll extra = check_left(a, m, k);
    ll ans = (right - left + extra + M) % M;
    cout << ans << endl;

    return 0;
}