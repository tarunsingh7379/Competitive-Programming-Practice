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
        int n, m;
        cin >> n >> m;
        int a[n + m];
        for (int i = 0; i < n + m; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n + m - 1);
        ll ans = 0;
        for (ll i = m; i < n + m; i++)
        {
            ans += a[i];
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}