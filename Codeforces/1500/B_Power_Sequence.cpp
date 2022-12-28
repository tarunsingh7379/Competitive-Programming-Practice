#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    ll ans = 1e18;
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        sum = sum + abs(a[i] - 1);
    }
    ans = min(ans, sum);
    if (n <= 60)
    {
        for (ll i = 2; i <= 1e5; i++)
        {
            ll cost = abs(a[0] - 1);
            ll p = i;
            ll flag = 1;
            for (ll j = 1; j < n; j++)
            {
                if (p <= 1e17 && p >= 1)
                {
                    ll prev = cost;
                    cost = cost + abs(a[j] - p);
                    if (cost < prev)
                    {
                        flag = 0;
                        break;
                    }
                    prev = p;
                    p = p * i;
                    if (p < prev)
                    {
                        flag = 0;
                        break;
                    }
                }
                else
                {
                    flag = 0;
                    break;
                }
            }
            if (flag == 1)
            {
                ans = min(ans, cost);
            }
        }
    }
    cout << ans << endl;
    return 0;
}