#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    string s;
    cin >> s;
    map<char, ll> mp;
    for (auto c : s)
    {
        mp[c]++;
    }
    ll ma = 0;
    for (auto num : mp)
    {
        ma = max(ma, num.second);
    }
    ll cnt = 0;
    if (mp['A'] == ma)
    {
        cnt++;
    }
    if (mp['G'] == ma)
    {
        cnt++;
    }
    if (mp['C'] == ma)
    {
        cnt++;
    }
    if (mp['T'] == ma)
    {
        cnt++;
    }
    ll ans = 1;
    for (ll i = 0; i < n; i++)
    {
        ans = (ans * cnt) % M;
    }
    cout << ans << endl;

    return 0;
}