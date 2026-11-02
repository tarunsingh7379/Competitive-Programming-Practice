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
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int start = 0;
        bool ok = true;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 1)
            {
                if (!start)
                {
                    start = 1;
                }
                else if (k <= 0)
                {
                    ok = false;
                    break;
                }
            }
            if (start)
                k--;
        }
        cout << (ok ? "YES" : "NO") << endl;
        t--;
    }

    return 0;
}