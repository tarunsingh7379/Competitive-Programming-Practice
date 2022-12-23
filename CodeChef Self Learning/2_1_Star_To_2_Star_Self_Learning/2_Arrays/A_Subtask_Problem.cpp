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
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll cnt = 0;
        for (ll i = 0; i < n; i++)
        {
            if (a[i] == 1)
            {
                cnt++;
            }
            else
            {
                break;
            }
        }
        ll ans = 0;
        if (cnt == n)
        {
            ans = 100;
        }
        else if (cnt >= m)
        {
            ans = k;
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}