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
        vector<ll> v;
        ll p = 2;
        for (ll i = 3;; i++)
        {
            p = p * i;
            if (p <= n)
            {
                v.push_back(p);
            }
            else
            {
                break;
            }
        }
        ll ans = INT_MAX;
        for (ll i = 0; i < (1LL << (v.size())); i++)
        {
            ll x = n;
            ll cnt = 0;
            for (ll j = 0; j < v.size(); j++)
            {

                if (i & (1LL << j))
                {
                    if (v[j] <= x)
                    {
                        x -= v[j];
                        cnt++;
                        if (x == 0)
                        {
                            break;
                        }
                    }
                }
            }
            while (x)
            {
                if (x % 2 == 1)
                {
                    cnt++;
                }
                x = x / 2;
            }
            ans = min(ans, cnt);
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}