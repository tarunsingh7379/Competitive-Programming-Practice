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
        int ans = n, last = -1;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != a[0])
            {
                ans = min(ans, i - last - 1);
                last = i;
            }
        }
        ans = min(ans, n - last - 1);
        if (ans == n)
        {
            ans = -1;
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}