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
        ll n, m, k;
        cin >> n >> m >> k;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        ll ans = 0, cnt = 0;
        for (ll i = 0; i < n && k > 0; i++)
        {
            ll bought = min(m, k);
            ans = ans + bought * (v[i] + cnt);
            cnt += bought;
            k -= bought;
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}