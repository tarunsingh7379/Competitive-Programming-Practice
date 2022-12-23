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
        ll n, have;
        cin >> n >> have;
        vector<pair<ll, ll>> v;
        for (ll i = 0; i < n; i++)
        {
            ll w, h, p;
            cin >> w >> h >> p;
            ll area = w * h;
            v.push_back({area, p});
        }
        sort(v.begin(), v.end());
        reverse(v.begin(), v.end());
        ll ans = -1;
        for (auto num : v)
        {
            if (num.second <= have)
            {
                ans = num.first;
                break;
            }
        }
        if (ans != -1)
        {
            cout << ans << endl;
        }
        else
        {
            cout << "no tablet" << endl;
        }
        t--;
    }

    return 0;
}