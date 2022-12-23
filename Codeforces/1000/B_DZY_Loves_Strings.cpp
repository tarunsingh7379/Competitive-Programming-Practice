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
    ll n;
    cin >> n;
    vector<ll> v(26);
    ll ma = 0;
    for (ll i = 0; i < 26; i++)
    {
        cin >> v[i];
        ma = max(ma, v[i]);
    }

    ll ans = 0;
    for (ll i = 0; i < s.size(); i++)
    {
        ans = ans + v[s[i] - 'a'] * (i + 1);
    }
    for (ll i = 0; i < n; i++)
    {
        ans = ans + ma * (s.size() + i + 1);
    }
    cout << ans << endl;
    return 0;
}