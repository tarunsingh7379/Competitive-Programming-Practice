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
        ll n, k;
        cin >> n >> k;
        ll h[n], p[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> h[i];
        }
        for (ll i = 0; i < n; i++)
        {
            cin >> p[i];
        }
        vector<pair<ll, ll>> v;
        for (ll i = 0; i < n; i++)
        {
            v.push_back({p[i], h[i]});
        }
        sort(v.begin(), v.end());
        ll dmg = 0, flag = 1;
        k += v[0].first;
        for (auto num : v)
        {
            if (dmg >= num.second)
            {
                continue;
            }
            k -= num.first;
            if (k > 0)
            {
                while (dmg < num.second)
                {
                    dmg += k;
                    if (dmg < num.second)
                        k -= num.first;
                    if (k < 0)
                    {
                        break;
                    }
                }
            }

            if (dmg < num.second)
            {
                flag = 0;
                break;
            }
        }
        cout << (flag ? "YES" : "NO") << endl;
        t--;
    }

    return 0;
}