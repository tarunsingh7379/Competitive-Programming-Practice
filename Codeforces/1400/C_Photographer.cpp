#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, d;
    cin >> n >> d;
    ll a, b;
    cin >> a >> b;
    vector<pair<ll, ll>> v;
    for (ll i = 0; i < n; i++)
    {
        ll x, y;
        cin >> x >> y;
        v.push_back({x * a + y * b, i + 1});
    }
    sort(v.begin(), v.end());

    vector<ll> ans;
    for (ll i = 0; i < n; i++)
    {
        d -= v[i].first;
        if (d >= 0)
        {
            ans.push_back(v[i].second);
        }
        else
        {
            break;
        }
    }
    cout << ans.size() << endl;
    for (auto num : ans)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}