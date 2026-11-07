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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int ans = 0;
        for (int i = 2; i <= 2 * k; i++)
        {
            int cur = i, pos = 0;
            bool ok = true;
            for (int j = 0; j < n; j++)
            {
                int d = a[j] - pos;
                cur -= d;
                if (cur < 0)
                {
                    ok = false;
                    break;
                }
                cur = i;
                pos = a[j];
            }
            if (!ok)
                continue;
            int d = k - pos;
            cur -= 2 * d;
            if (cur < 0)
            {
                continue;
            }
            cur = i;
            pos = a[n - 1];
            for (int j = n - 2; j >= 0; j--)
            {
                int d = pos - a[j];
                cur -= d;
                if (cur < 0)
                {
                    ok = false;
                    break;
                }
                cur = i;
                pos = a[j];
            }
            if (!ok)
                continue;
            d = pos - 0;
            cur -= d;
            if (cur >= 0)
            {
                ans = i;
                break;
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}