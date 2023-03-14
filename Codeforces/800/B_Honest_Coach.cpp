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
        sort(a, a + n);
        int ans = INT_MAX;
        for (int i = 0; i < n - 1; i++)
        {
            ans = min(ans, a[i + 1] - a[i]);
        }
        cout << ans << endl;

        t--;
    }

    return 0;
}