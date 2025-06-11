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
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int ans = 0;
        for (int i = 1; i < n; i++)
        {
            int g = __gcd(a[i], a[i - 1]);
            if (g != a[i] && g != a[i - 1])
            {
                ans++;
                a[i] = g;
            }
        }
        for (int i = n - 2; i >= 0; i--)
        {
            if (a[i] != a[i + 1])
            {
                ans++;
                a[i] = a[i + 1];
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}