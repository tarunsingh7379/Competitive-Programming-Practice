#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m;
    cin >> n >> m;
    ll a[n][m];
    map<ll, vector<ll>> rows;
    map<ll, vector<ll>> cols;
    set<ll> colors;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            cin >> a[i][j];
            rows[a[i][j]].push_back(i + 1);
            cols[a[i][j]].push_back(j + 1);
            colors.insert(a[i][j]);
        }
    }
    ll ans = 0;
    for (auto color : colors)
    {
        ll idx = 0, k = rows[color].size();
        sort(rows[color].begin(), rows[color].end());
        sort(cols[color].begin(), cols[color].end());
        for (auto num : rows[color])
        {
            ans = ans + (2 * idx + 1 - k) * num;
            idx++;
        }
        idx = 0;
        k = cols[color].size();
        for (auto num : cols[color])
        {
            ans = ans + (2 * idx + 1 - k) * num;
            idx++;
        }
    }
    cout << ans << endl;

    return 0;
}