#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll a, b, f, k;
    cin >> a >> b >> f >> k;
    int ans = 0, flag = 1;
    int cur = b;
    for (int i = 0; i < k; i++)
    {
        if (flag)
        {
            if (cur < f)
            {
                ans = -1;
                break;
            }
            cur -= f;
            if (((a - f) > cur) || (i != k - 1 && 2 * (a - f) > cur))
            {
                cur = b;
                ans++;
            }
            if ((a - f) > cur)
            {
                ans = -1;
                break;
            }
            cur -= (a - f);
        }
        else
        {
            if ((a - f) > cur)
            {
                ans = -1;
                break;
            }
            cur -= (a - f);
            if ((f > cur) || (i != k - 1 && 2 * f > cur))
            {
                cur = b;
                ans++;
            }
            if (f > cur)
            {
                ans = -1;
                break;
            }
            cur -= f;
        }
        flag ^= 1;
    }
    cout << ans << endl;
    return 0;
}