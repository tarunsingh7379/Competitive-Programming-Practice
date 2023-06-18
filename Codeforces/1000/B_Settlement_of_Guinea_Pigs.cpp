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
        int ans = 0;
        int known = 0, unknown = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x == 1)
            {
                unknown++;
            }
            else
            {
                known += unknown;
                unknown = 0;
            }
            int y = unknown;

            if (known > 0)
            {
                y = y + known / 2 + 1;
            }
            ans = max(ans, y);
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}