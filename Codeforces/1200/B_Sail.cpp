#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, x1, y1, x2, y2;
    cin >> n >> x1 >> y1 >> x2 >> y2;
    string s;
    cin >> s;
    ll ans = 0;
    if (x1 == x2 && y1 == y2)
    {
        cout << 0 << endl;
    }
    else
    {
        ll flag = 0;
        for (auto c : s)
        {
            ll x = x1, y = y1;
            switch (c)
            {
            case 'N':
                y++;
                break;
            case 'S':
                y--;
                break;
            case 'E':
                x++;
                break;
            case 'W':
                x--;
                break;
            default:
                break;
            }
            ll Old = abs(x2 - x1) + abs(y2 - y1);
            ll New = abs(x2 - x) + abs(y2 - y);
            if (New < Old)
            {
                x1 = x;
                y1 = y;
            }
            ans++;
            if (x1 == x2 && y1 == y2)
            {
                flag = 1;
                break;
            }
        }
        cout << (flag ? ans : -1) << endl;
    }

    return 0;
}