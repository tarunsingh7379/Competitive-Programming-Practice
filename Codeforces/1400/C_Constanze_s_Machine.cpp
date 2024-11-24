#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

ll func(int ind, int n, string &s, vector<ll> &dp)
{
    if (ind >= n)
    {
        return 1;
    }
    if (dp[ind] != -1)
    {
        return dp[ind];
    }
    ll ans = 0;
    if (ind + 1 < n && s[ind] == s[ind + 1])
    {
        if (s[ind] == 'u' || s[ind] == 'n')
        {
            ans = (ans + func(ind + 2, n, s, dp)) % M;
        }
    }
    ans = (ans + func(ind + 1, n, s, dp)) % M;
    return dp[ind] = ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    int n = s.size();
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'w' || s[i] == 'm')
        {
            flag = 1;
            break;
        }
    }
    if (flag)
    {
        cout << 0 << endl;
    }
    else
    {
        vector<ll> dp(n, -1);
        cout << func(0, n, s, dp) << endl;
    }

    return 0;
}
