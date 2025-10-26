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
    ll a[n];
    vector<pair<ll, ll>> v;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        v.push_back({a[i], i + 1});
    }
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    vector<int> used(k + n + 1, 0);
    ll ans = 0, last = k + 1;
    vector<ll> res(n + 1, 0);
    for (ll i = 0; i < n; i++)
    {
        if (v[i].second <= last)
        {
            res[v[i].second] = last;
            used[last] = 1;
            while (last < k + n + 1 && used[last])
            {
                last++;
            }
        }
        else
        {
            res[v[i].second] = v[i].second;
            used[v[i].second] = 1;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        ans += (res[i] - i) * a[i - 1];
    }

    cout << ans << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << res[i] << " ";
    }
    cout << endl;

    return 0;
}