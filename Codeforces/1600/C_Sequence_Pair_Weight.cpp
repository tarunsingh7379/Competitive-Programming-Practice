#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t)
    {
        ll n;
        cin >> n;
        ll a[n];
        map<ll, vector<ll>> mp;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]].push_back(i);
        }
        ll ans = 0;
        for (auto num : mp)
        {
            ll sz = num.second.size();
            ll suffix[sz] = {0};
            suffix[sz - 1] = num.second.back();
            for (ll i = sz - 2; i >= 0; i--)
            {
                suffix[i] = suffix[i + 1] + num.second[i];
            }
            ll prev = num.second[0] + 1;
            for (ll i = 1; i < sz; i++)
            {
                ans = ans + prev * ((sz - i) * n - suffix[i]);
                prev = prev + num.second[i] - num.second[i - 1];
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}