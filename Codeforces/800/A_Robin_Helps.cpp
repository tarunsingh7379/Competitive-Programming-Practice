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
        int ans = 0, cur = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] >= k)
            {
                cur += a[i];
            }
            if (a[i] == 0 && cur > 0)
            {
                cur--;
                ans++;
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}