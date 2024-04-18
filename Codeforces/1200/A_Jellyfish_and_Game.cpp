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
        int n, m, k;
        cin >> n >> m >> k;
        int a[n], b[m];
        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }
        if (k > 10)
            k = k - (k - 10) / 2 * 2;
        for (int i = 0; i < k; i++)
        {
            sort(a, a + n);
            sort(b, b + m);
            if (i % 2 == 0)
            {
                if (a[0] < b[m - 1])
                {
                    swap(a[0], b[m - 1]);
                }
            }
            else
            {
                if (b[0] < a[n - 1])
                {
                    swap(b[0], a[n - 1]);
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            ans += a[i];
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}