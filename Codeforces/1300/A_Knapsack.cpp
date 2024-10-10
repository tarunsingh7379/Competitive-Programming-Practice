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
        ll n, w;
        cin >> n >> w;
        vector<pair<ll, ll>> v;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            if (x <= w)
            {
                v.push_back({x, i});
            }
        }
        n = v.size();
        int ans = -1;
        for (int i = 0; i < n; i++)
        {
            if (v[i].first >= ((w + 1) / 2))
            {
                ans = v[i].second;
                break;
            }
        }
        if (ans == -1)
        {
            vector<ll> temp;
            ll sum = 0;
            for (ll i = n - 1; i >= 0; i--)
            {
                sum += v[i].first;
                temp.push_back(v[i].second);
                if (sum >= (w + 1) / 2 && sum <= w)
                {
                    sum = -1;
                    break;
                }
            }
            if (sum == -1)
            {
                cout << temp.size() << endl;
                for (auto num : temp)
                {
                    cout << num + 1 << " ";
                }
                cout << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
        else
        {
            cout << 1 << endl;
            cout << ans + 1 << endl;
        }
        t--;
    }

    return 0;
}