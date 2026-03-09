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
    vector<ll> a(n);
    map<int, int> mp;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    ll ans = 0;
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        if (it->second > 1)
        {
            int bit = it->first;
            int freq = it->second;
            mp[bit] = freq % 2;
            mp[bit + 1] += freq / 2;
        }
    }
    int cnt = 0;
    for (auto num : mp)
    {
        if (num.second > 0)
        {
            cnt++;
        }
    }
    ans = mp.rbegin()->first + 1 - cnt;
    cout << ans << endl;

    return 0;
}