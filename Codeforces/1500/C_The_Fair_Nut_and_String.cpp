#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

ll dp[100005][2][2];

ll func(ll ind, ll found, ll start, ll n, string &s)
{
    if (ind >= n)
    {
        return start;
    }
    if (dp[ind][found][start] != -1)
    {
        return dp[ind][found][start];
    }
    ll ans = 0;
    if (s[ind] == 'a' && found)
    {
        ans = (ans + func(ind + 1, 0, 1, n, s)) % M;
    }
    if (s[ind] == 'b')
    {
        ans = (ans + func(ind + 1, 1, start, n, s)) % M;
    }
    else
    {
        ans = (ans + func(ind + 1, found, start, n, s)) % M;
    }
    return dp[ind][found][start] = ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    ll n = s.size();
    memset(dp, -1, sizeof(dp));
    cout << func(0, 1, 0, n, s) << endl;

    return 0;
}