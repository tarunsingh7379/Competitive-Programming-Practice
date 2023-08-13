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
        ll A, B, n;
        cin >> A >> B >> n;
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll b[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        vector<pair<ll, ll>> v;
        for (ll i = 0; i < n; i++)
        {
            v.push_back({a[i], b[i]});
        }
        sort(v.begin(), v.end());
        ll ans = 1;
        for (ll i = 0; i < n; i++)
        {
            ll turn = (v[i].second + A - 1) / A;
            B -= v[i].first * turn;
            if (B <= 0 && -B + 1 > v[i].first)
            {
                ans = 0;
                break;
            }
        }
        cout << (ans ? "YES" : "NO") << endl;

        t--;
    }

    return 0;
}