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
        ll a, b, c, d, k;
        cin >> a >> b >> c >> d >> k;
        ll dis = abs(a - c) + abs(b - d);
        if (dis <= k)
        {
            ll rem = k - dis;
            if (rem % 2 == 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
        t--;
    }

    return 0;
}