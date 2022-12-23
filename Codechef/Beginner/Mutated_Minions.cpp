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
        ll a[n];
        ll ans = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            a[i] = a[i] + k;
            if (a[i] % 7 == 0)
            {
                ans++;
            }
        }
        cout << ans << endl;

        t--;
    }

    return 0;
}