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
        ll n, m;
        cin >> n >> m;

        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        vector<ll> freq(m, 0);

        for (auto num : a)
        {
            freq[num % m]++;
        }

        ll ans = 0;
        if (freq[0] > 0)
        {
            ans++;
        }
        for (ll i = 1; i <= m / 2; i++)
        {
            ll d = abs(freq[i] - freq[m - i]);
            if (freq[i] == 0 && freq[m - i] == 0)
            {
            }
            else if (d == 0 || d == 1)
            {
                ans++;
            }
            else
            {
                ans = ans + d;
            }
        }

        cout << ans << endl;

        t--;
    }

    return 0;
}