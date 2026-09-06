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
        if (!is_sorted(a, a + n))
        {
            cout << 0 << endl;
        }
        else
        {
            int d = 1e12;
            for (int i = 1; i < n; i++)
            {
                d = min(d, a[i] - a[i - 1]);
            }
            int ans = d / 2 + 1;
            cout << ans << endl;
        }
        t--;
    }

    return 0;
}