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
        vector<pair<ll, pair<ll, ll>>> v;
        for (ll i = 0; i < n; i++)
        {
            ll T, l, r;
            cin >> T >> l >> r;
            v.push_back({T, {l, r}});
        }
        ll flag = 1;
        ll mi = m, ma = m;
        ll prev = 0;
        for (ll i = 0; i < n; i++)
        {
            ll time = v[i].first - prev;
            mi = mi - time;
            ma = ma + time;
            if (v[i].second.first <= ma && v[i].second.second >= mi)
            {
            }
            else
            {
                flag = 0;
                break;
            }
            mi = max(mi, v[i].second.first);
            ma = min(ma, v[i].second.second);
            prev = v[i].first;
        }
        cout << (flag ? "YES" : "NO") << endl;
        t--;
    }

    return 0;
}