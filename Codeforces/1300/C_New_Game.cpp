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
        int j = 0;
        for (int i = 0; i < n; i++)
        {
            j = max(i, j);
            while (j + 1 < n && a[j + 1] - a[j] <= 1 && a[j + 1] - a[i] < k)
            {
                j++;
            }
            ans = max(ans, j - i + 1);
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}