#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    int ans = 0;
    while (m)
    {
        for (int i = 1; i <= n; i++)
        {
            if (m >= i)
            {
                m -= i;
            }
            else
            {
                ans = m;
                m = 0;
                break;
            }
        }
    }
    cout << ans << endl;

    return 0;
}