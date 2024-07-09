#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    map<char, ll> mp;
    for (auto c : s)
    {
        mp[c]++;
    }
    vector<int> v;
    for (auto it : mp)
    {
        v.push_back(it.second);
    }
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    ll ans = 0, ind = 0;
    while (k && ind < v.size())
    {
        if (k >= v[ind])
        {
            ans = ans + 1LL * v[ind] * v[ind];
            k -= v[ind];
        }
        else
        {
            ans = ans + 1LL * k * k;
            k = 0;
        }
        ind++;
    }
    cout << ans << endl;
    return 0;
}