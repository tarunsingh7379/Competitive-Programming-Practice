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
        ll n, k;
        cin >> n >> k;
        vector<pair<ll, ll>> v;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            v.push_back({x, i});
        }
        sort(v.begin(), v.end());
        vector<ll> b;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            b.push_back(x);
        }
        sort(b.begin(), b.end());
        vector<ll> ans(n, 0);
        for (ll i = 0; i < n; i++)
        {
            ans[v[i].second] = b[i];
        }
        for (auto num : ans)
        {
            cout << num << " ";
        }
        cout << endl;
        t--;
    }

    return 0;
}