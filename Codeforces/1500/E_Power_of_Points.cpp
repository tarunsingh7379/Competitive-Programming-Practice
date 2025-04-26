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
        ll sum1 = 0, sum2 = 0;
        vector<pair<int, int>> v;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            sum2 += a[i];
            v.push_back({a[i], i});
        }
        sort(v.begin(), v.end());
        vector<ll> ans(n, 0);
        for (ll i = 0; i < n; i++)
        {
            ll res = 0;
            sum2 -= v[i].first;
            sum1 += v[i].first;
            res += (n + v[i].first * (2 * (i + 1) - n));
            res -= sum1;
            res += sum2;
            ans[v[i].second] = res;
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