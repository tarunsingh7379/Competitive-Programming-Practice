#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    ll n = s.size();
    vector<ll> f(26, 0);
    vector<vector<ll>> dp(26, vector<ll>(26, 0));
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < 26; j++)
        {
            dp[j][s[i] - 'a'] += f[j];
        }
        f[s[i] - 'a']++;
    }
    ll ans = 0;
    for (ll i = 0; i < 26; i++)
    {
        ans = max(ans, f[i]);
        for (ll j = 0; j < 26; j++)
        {
            ans = max(ans, dp[i][j]);
        }
    }
    cout << ans << endl;
    return 0;
}