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
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<ll> temp;
        ll ans = 0;
        for (ll i = 2; i <= 2 * n; i++)
        {
            temp = a;
            ll cnt = 0;
            for (ll j = 0; j < n; j++)
            {
                if (temp[j] == -1)
                {
                    continue;
                }
                for (ll k = j + 1; k < n; k++)
                {
                    if (temp[k] == -1)
                    {
                        continue;
                    }
                    ll sum = temp[j] + temp[k];
                    if (sum == i)
                    {
                        cnt++;
                        temp[j] = -1;
                        temp[k] = -1;
                        break;
                    }
                }
            }
            ans = max(ans, cnt);
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}