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
        int a[2 * n + 1], b[2 * n + 1];
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a[x] = i;
        }
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            b[x] = i;
        }
        int ans = 1e9;
        int last = 1e9;
        for (int num = 2 * n; num >= 1; num--)
        {
            if (num & 1)
            {
                ans = min(ans, a[num] + last);
            }
            else
            {
                last = min(last, b[num]);
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}