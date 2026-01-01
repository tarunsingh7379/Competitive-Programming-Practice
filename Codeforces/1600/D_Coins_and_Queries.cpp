#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

ll get_cost(ll bit, vector<ll> &freq)
{
    ll cost = 0, req = 1;
    for (ll i = bit; i >= 0; i--)
    {
        if (freq[i] >= req)
        {
            cost += req;
            freq[i] -= req;
            req = 0;
            break;
        }
        else
        {
            cost += freq[i];
            req -= freq[i];
            req *= 2;
            freq[i] = 0;
        }
    }
    if (req != 0)
    {
        return -1;
    }
    return cost;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, q;
    cin >> n >> q;
    vector<ll> freq(32, 0);
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        for (ll j = 31; j >= 0; j--)
        {
            if (x & (1LL << j))
            {
                freq[j]++;
                break;
            }
        }
    }
    while (q--)
    {
        ll x;
        cin >> x;
        ll ans = 0;
        vector<ll> temp = freq;
        for (ll i = 0; i <= 31; i++)
        {
            if (x & (1LL << i))
            {
                ll cost = get_cost(i, temp);
                if (cost != -1)
                {
                    ans += cost;
                }
                else
                {
                    ans = -1;
                    break;
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}