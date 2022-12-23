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
    ll ans = n;
    sort(a, a + n);
    ll l = n / 2;
    for (ll i = 0; i < n / 2; i++)
    {
        while (l < n)
        {
            if (a[l] >= 2 * a[i])
            {
                ans--;
                l++;
                break;
            }
            else
            {
                l++;
            }
        }
    }

    cout << ans << endl;
    return 0;
}