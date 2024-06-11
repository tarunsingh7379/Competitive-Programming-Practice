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
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll ans1 = 0, ans2 = 0;
        for (ll i = 0; i < n; i++)
        {
            ans1 += a[i];
            ans2 += a[i];
            ans2 = max(ans2, abs(ans1));
            ans2 = max(ans2, abs(ans2));
        }
        cout << ans2 << endl;
        t--;
    }

    return 0;
}