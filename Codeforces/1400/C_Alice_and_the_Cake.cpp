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
        ll sum = 0;
        map<ll, ll> mp;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
            mp[a[i]]++;
        }
        queue<ll> q;
        q.push(sum);
        while (!q.empty())
        {
            ll x = q.front();
            q.pop();
            if (mp[x])
            {
                mp[x]--;
            }
            else if (x >= 2)
            {
                ll u = x / 2;
                ll v = (x + 1) / 2;
                q.push(u);
                q.push(v);
            }
            if (q.size() > 2 * n)
            {
                break;
            }
        }
        ll z = 0;
        for (auto num : mp)
        {
            z += (num.second);
        }
        if (q.empty() && z == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        t--;
    }

    return 0;
}