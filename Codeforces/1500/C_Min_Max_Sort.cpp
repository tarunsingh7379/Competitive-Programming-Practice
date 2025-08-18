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
        vector<ll> pos(n + 1);
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            pos[x] = i;
        }
        ll l = (n + 1) / 2, r = (n + 2) / 2;
        while (l > 0 && (l == r || (pos[l] < pos[l + 1] && pos[r - 1] < pos[r])))
        {
            l--;
            r++;
        }
        ll ans = (n - (r - l) + 1) / 2;
        cout << ans << endl;
        t--;
    }

    return 0;
}