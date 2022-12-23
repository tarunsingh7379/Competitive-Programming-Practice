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
        ll l, r;
        cin >> l >> r;
        ll n = r - l + 1;
        ll a[n];
        ll x = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            x = x ^ a[i] ^ i;
        }
        if (n % 2 == 0)
        {
            ll freq1[20] = {0}, freq2[20] = {0};
            for (ll i = 0; i < n; i++)
            {
                for (ll j = 0; j < 20; j++)
                {
                    if (i & (1LL << j))
                    {
                        freq1[j]++;
                    }
                    if (a[i] & (1LL << j))
                    {
                        freq2[j]++;
                    }
                }
            }
            x = 0;
            for (ll i = 0; i < 20; i++)
            {
                if (freq1[i] != freq2[i])
                {
                    x = x + (1LL << i);
                }
            }
        }
        cout << x << endl;
        t--;
    }

    return 0;
}