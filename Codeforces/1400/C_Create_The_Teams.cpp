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
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        reverse(a, a + n);
        int ans = 0, cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cnt++;
            if (cnt * a[i] >= k)
            {
                ans++;
                cnt = 0;
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}