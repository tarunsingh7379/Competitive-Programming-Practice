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
        ll a, b;
        cin >> a >> b;
        string s;
        cin >> s;

        ll st = -1;
        vector<pair<ll, ll>> v;
        for (ll i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
            {
                if (st == -1)
                {
                    st = i;
                }
            }
            else
            {
                if (st != -1)
                {
                    v.push_back({st, i - 1});
                    st = -1;
                }
            }
        }

        if (st != -1)
        {
            v.push_back({st, n - 1});
            st = -1;
        }

        ll ans = 0;
        if (v.size())
        {
            ans = a;
        }
        for (ll i = 1; i < v.size(); i++)
        {
            ans = ans + min(a, b * (v[i].first - v[i - 1].second - 1));
        }

        cout << ans << endl;

        t--;
    }

    return 0;
}