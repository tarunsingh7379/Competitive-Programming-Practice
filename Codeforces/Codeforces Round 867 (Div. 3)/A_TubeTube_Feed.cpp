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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int ans = -1, ma = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] + i <= k)
            {
                if (b[i] > ma)
                {
                    ma = b[i];
                    ans = i + 1;
                }
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}