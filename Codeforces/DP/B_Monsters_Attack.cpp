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
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<ll> pos(n);
        map<ll, ll> mp;
        for (ll i = 0; i < n; i++)
        {
            cin >> pos[i];
            mp[abs(pos[i])] += a[i];
        }
        bool ok = true;
        ll prev = 0;
        for (ll i = 1; i <= n; i++)
        {
            ll hp = mp[i];
            ll cur_bullets = k + prev;
            if (hp > cur_bullets)
            {
                ok = false;
                break;
            }
            prev = cur_bullets - hp;
        }
        cout << (ok ? "YES" : "NO") << endl;
        t--;
    }

    return 0;
}