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
        sort(a, a + n);
        int ans = 0;
        if (k <= a[0])
        {
            ans = a[n - 1] - k;
        }
        else if (k >= a[n - 1])
        {
            ans = k - a[0];
        }
        else
        {
            ans = min(a[n - 1] - k + a[n - 1] - a[0], k - a[0] + a[n - 1] - a[0]);
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}