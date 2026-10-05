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
        int n, k;
        cin >> n >> k;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        sort(a, a + n);
        sort(b, b + n);
        reverse(b, b + n);
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] < b[i] && k > 0)
            {
                ans += b[i];
                k--;
            }
            else
            {
                ans += a[i];
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}