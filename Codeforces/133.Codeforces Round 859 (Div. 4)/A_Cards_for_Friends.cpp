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
        ll w, h, n;
        cin >> w >> h >> n;
        ll ans = 0, cnt = 0;
        while (w > 0 && w % 2 == 0)
        {
            w /= 2;
            cnt++;
        }
        ans += (1LL << cnt);
        cnt = 0;
        while (h > 0 && h % 2 == 0)
        {
            h /= 2;
            cnt++;
        }
        ans *= (1LL << cnt);
        if (ans >= n)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        t--;
    }

    return 0;
}