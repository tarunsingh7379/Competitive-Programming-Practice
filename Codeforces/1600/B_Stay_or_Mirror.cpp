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
        ll ans = 0;
        for (ll i = 0; i < n; i++)
        {
            ll left = 0, right = 0;
            for (ll j = 0; j < i; j++)
            {
                if (a[j] > a[i])
                {
                    left++;
                }
            }
            for (ll j = i + 1; j < n; j++)
            {
                if (a[j] > a[i])
                {
                    right++;
                }
            }
            ans += min(left, right);
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}