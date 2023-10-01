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
        vector<pair<ll, ll>> v;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            v.push_back({x, i});
        }
        vector<ll> ans(n + 1, 0);
        ll cost = 0;

        sort(v.begin(), v.end());
        reverse(v.begin(), v.end());
        ll ind = 1, flag = 1;
        for (auto num : v)
        {
            cost = cost + 2 * ind * (num.first);
            if (flag)
            {
                ans[num.second + 1] = ind;
            }
            else
            {
                ans[num.second + 1] = -ind;
                ind++;
            }
            flag ^= 1;
        }

        cout << cost << endl;
        for (auto num : ans)
        {
            cout << num << " ";
        }
        cout << endl;
        t--;
    }

    return 0;
}