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
        int a[4];
        for (int i = 0; i < 4; i++)
        {
            cin >> a[i];
        }
        int ok = 1;
        for (int i = 0; i < (1 << 4); i++)
        {
            ok = 1;
            for (int j = 0; j < 4; j++)
            {
                int have = !!(i & (1 << j)) + !!(i & (1 << ((j + 1) % 4)));
                if ((a[j] - have) > n - 2 || (a[j] - have) < 0)
                {
                    ok = 0;
                    break;
                }
            }
            if (ok)
            {
                break;
            }
        }
        cout << (ok ? "YES" : "NO") << endl;
        t--;
    }

    return 0;
}