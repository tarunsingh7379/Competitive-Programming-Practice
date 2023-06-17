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
        n = unique(a, a + n) - a;
        int ans = n;
        for (int i = 1; i < n - 1; i++)
        {
            if (a[i] > a[i - 1] && a[i] < a[i + 1])
            {
                ans--;
            }
            if (a[i] < a[i - 1] && a[i] > a[i + 1])
            {
                ans--;
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}