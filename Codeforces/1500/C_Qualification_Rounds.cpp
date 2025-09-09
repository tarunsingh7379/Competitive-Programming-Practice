#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, k;
    cin >> n >> k;
    vector<ll> freq(1 << k);
    for (ll i = 0; i < n; i++)
    {
        ll val = 0;
        for (ll j = 0; j < k; j++)
        {
            ll x;
            cin >> x;
            val = val * 2 + x;
        }
        freq[val]++;
    }
    if (freq[0])
    {
        cout << "YES" << endl;
    }
    else
    {
        bool ok = false;
        for (ll i = 0; i < (1 << k); i++)
        {
            for (ll j = i + 1; j < (1 << k); j++)
            {
                if (freq[i] && freq[j] && ((i & j) == 0))
                {
                    ok = true;
                    break;
                }
            }
            if (ok)
            {
                break;
            }
        }
        cout << (ok ? "YES" : "NO") << endl;
    }

    return 0;
}