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
        vector<ll> c(n), a(n), b(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> c[i];
        }
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (ll i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        ll ans = 0;
        ll curr = abs(a[1] - b[1]) + 2;
        for (ll i = 1; i < n - 1; i++)
        {
            ans = max(ans, curr + c[i] - 1);
            curr = curr + abs(min(a[i + 1], b[i + 1]) - 1) + abs(max(a[i + 1], b[i + 1]) - c[i]) + 2;
            if (a[i + 1] == b[i + 1])
            {
                curr = 2;
            }
            curr = max(curr, abs(a[i + 1] - b[i + 1]) + 2);
        }
        ans = max(ans, curr + c[n - 1] - 1);
        cout << ans << endl;
        t--;
    }

    return 0;
}