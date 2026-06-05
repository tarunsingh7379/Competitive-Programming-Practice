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
        vector<pair<ll, ll>> v;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            v.push_back({x, i});
        }
        sort(v.begin(), v.end());
        vector<ll> prefix(n);
        prefix[0] = v[0].first;
        for (ll i = 1; i < n; i++)
        {
            prefix[i] = prefix[i - 1] + v[i].first;
        }
        vector<ll> ok(n);
        ok[n - 1] = n - 1;
        vector<ll> ans(n);
        ans[v[n - 1].second] = ok[n - 1];
        for (ll i = n - 2; i >= 0; i--)
        {
            if (prefix[i] >= v[i + 1].first)
            {
                ok[i] = ok[i + 1];
            }
            else
            {
                ok[i] = i;
            }
            ans[v[i].second] = ok[i];
        }
        for (ll i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
        t--;
    }

    return 0;
}