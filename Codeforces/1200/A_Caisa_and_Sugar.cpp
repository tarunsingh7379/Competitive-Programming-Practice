#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    int ans = -1;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        if ((x * 100 + y) <= k * 100)
        {
            if (y == 0)
            {
                ans = max(ans, 0);
            }
            else
            {
                ans = max(ans, 100 - y);
            }
        }
    }
    cout << ans << endl;

    return 0;
}