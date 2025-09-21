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
        ll a[n];
        ll sum = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        sort(a, a + n);
        reverse(a, a + n);
        ll ans = (sum + 1) / 2;
        sum /= 2;
        for (int i = 0; i < n && sum > 0; i++)
        {
            sum -= a[i];
            ans++;
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}