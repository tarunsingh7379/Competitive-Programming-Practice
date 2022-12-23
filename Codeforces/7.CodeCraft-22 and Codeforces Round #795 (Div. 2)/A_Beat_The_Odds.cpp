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
        ll cnt1 = 0, cnt2 = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2 == 0)
            {
                cnt1++;
            }
            else
            {
                cnt2++;
            }
        }
        ll ans = min(cnt1, cnt2);
        cout << ans << endl;
        t--;
    }

    return 0;
}