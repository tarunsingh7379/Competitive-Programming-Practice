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
        for (int i = 0; i <= n; i++)
        {
            int rem = (n - 2 * i);
            if (rem >= 0 && rem % 4 == 0)
            {
                ans++;
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}