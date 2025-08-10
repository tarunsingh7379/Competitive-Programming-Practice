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
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        map<ll, vector<ll>> mp;
        for (ll i = 0; i < n; i++)
        {
            mp[a[i] + i].push_back(i);
        }
        queue<ll> q;
        q.push(n);
        ll ans = n;
        set<ll> vis;
        vis.insert(n);
        while (!q.empty())
        {
            ll cur_len = q.front();
            q.pop();
            ans = max(ans, cur_len);
            for (auto num : mp[cur_len])
            {
                ll new_len = cur_len + num;
                if (!vis.count(new_len))
                {
                    q.push(new_len);
                    vis.insert(new_len);
                }
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}