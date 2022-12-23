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
    map<string, ll> mp;
    for (ll i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        mp[s]++;
    }
    ll ans = 0;
    for (auto num : mp)
    {
        ans = max(ans, num.second);
    }
    cout << ans << endl;

    return 0;
}