#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        int ans = INT_MAX;
        for (int j = 0; j <= 15; j++)
        {
            for (int k = 0; k <= 15; k++)
            {
                int z = (x + j) * (1 << k);
                if (z % (1 << 15) == 0)
                {
                    ans = min(ans, j + k);
                }
            }
        }
        cout << ans << " ";
    }
    cout << endl;

    return 0;
}