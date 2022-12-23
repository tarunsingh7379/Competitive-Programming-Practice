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
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        vector<vector<ll>> v(m);
        for (ll i = 0; i < m; i++)
        {
            ll x;
            cin >> x;
            for (ll j = 0; j < x; j++)
            {
                ll z;
                cin >> z;
                v[i].push_back(z);
            }
        }
        vector<ll> ans(m, 0);
        ll used[n + 1] = {0};
        for (ll i = 0; i < m; i++)
        {
            ans[i] = v[i][0];
            used[v[i][0]]++;
        }
        ll ma = used[1], x = 1;
        for (ll i = 1; i <= n; i++)
        {
            if (used[i] > ma)
            {
                ma = used[i];
                x = i;
            }
        }
        if (ma <= (m + 1) / 2)
        {
            cout << "YES" << endl;
            for (auto num : ans)
            {
                cout << num << " ";
            }
            cout << endl;
            continue;
        }
        for (ll i = 0; i < m; i++)
        {
            if (v[i].size() > 1 && v[i][0] == x)
            {
                ans[i] = v[i][1];
                ma--;
            }
            if (ma == (m + 1) / 2)
            {
                break;
            }
        }
        if (ma != (m + 1) / 2)
        {
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;
        for (auto num : ans)
        {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}