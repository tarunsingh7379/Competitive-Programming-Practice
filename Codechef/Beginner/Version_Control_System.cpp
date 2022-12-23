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
        ll cnt[n + 1] = {0};
        for (ll i = 0; i < m; i++)
        {
            ll x;
            cin >> x;
            cnt[x]++;
        }
        for (ll i = 0; i < k; i++)
        {
            ll x;
            cin >> x;
            cnt[x]++;
        }

        ll ans1 = 0, ans2 = 0;
        for (ll i = 1; i <= n; i++)
        {
            if (cnt[i] == 2)
            {
                ans1++;
            }
            else if (cnt[i] == 0)
            {
                ans2++;
            }
        }
        cout << ans1 << " " << ans2 << endl;
        t--;
    }

    return 0;
}