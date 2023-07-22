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
        int ans = -1, ma = 0;
        for (int i = 0; i < n; i++)
        {
            int a, b;
            cin >> a >> b;
            if (a <= 10)
            {
                if (b > ma)
                {
                    ans = i + 1;
                    ma = b;
                }
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}