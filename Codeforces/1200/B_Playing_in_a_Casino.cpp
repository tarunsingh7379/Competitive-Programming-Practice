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
        ll n, m;
        cin >> n >> m;
        ll a[n][m];
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        ll ans = 0;
        for (ll j = 0; j < m; j++)
        {
            vector<ll> v;
            for (ll i = 0; i < n; i++)
            {
                v.push_back(a[i][j]);
            }
            sort(v.begin(), v.end());
            vector<ll> d;
            for (ll i = 1; i < v.size(); i++)
            {
                d.push_back(v[i] - v[i - 1]);
            }
            for (ll i = 0; i < d.size(); i++)
            {
                ll x = d[i];
                ll left = i + 1;
                ll right = d.size() - i;
                ans = ans + x * left * right;
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}