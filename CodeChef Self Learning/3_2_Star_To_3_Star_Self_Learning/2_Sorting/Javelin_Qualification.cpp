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
        ll n, m, x;
        cin >> n >> m >> x;
        vector<pair<ll, ll>> v;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            v.push_back({x, i + 1});
        }
        sort(v.begin(), v.end());
        ll i = 0;
        while (i < n && v[i].first < m)
        {
            i++;
        }
        vector<ll> ans;
        ll cnt = n - i;
        for (ll j = i - 1; j >= 0 && cnt < x; j--)
        {
            ans.push_back(v[j].second);
            cnt++;
        }
        for (ll j = i; j < n; j++)
        {
            ans.push_back(v[j].second);
        }
        sort(ans.begin(), ans.end());
        cout << ans.size() << " ";
        for (auto num : ans)
        {
            cout << num << " ";
        }
        cout << endl;
        t--;
    }

    return 0;
}