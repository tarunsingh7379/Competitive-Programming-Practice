#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

ll dp[20][2][20];

ll func(ll ind, ll flag, ll cnt, string &s)
{
    if (ind >= s.size())
    {
        return (cnt <= 3);
    }
    if (dp[ind][flag][cnt] != -1)
    {
        return dp[ind][flag][cnt];
    }
    ll ans = 0;
    ll limit = s[ind] - '0';
    if (flag)
    {
        limit = 9;
    }
    for (ll d = 0; d <= limit; d++)
    {
        if (d < s[ind] - '0')
        {
            ans = ans + func(ind + 1, 1, cnt + (d != 0), s);
        }
        else
        {
            ans = ans + func(ind + 1, flag, cnt + (d != 0), s);
        }
    }
    return dp[ind][flag][cnt] = ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t)
    {
        ll l, r;
        cin >> l >> r;
        l--;
        string L = to_string(l);
        string R = to_string(r);
        memset(dp, -1, sizeof(dp));
        ll right = func(0, 0, 0, R);
        memset(dp, -1, sizeof(dp));
        ll left = func(0, 0, 0, L);
        cout << right - left << endl;
        t--;
    }

    return 0;
}