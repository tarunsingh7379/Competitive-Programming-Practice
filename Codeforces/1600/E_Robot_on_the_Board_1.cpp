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
        ll n, m;
        cin >> n >> m;
        string s;
        cin >> s;
        ll col = 0, row = 0;
        ll left = 0, right = 0, up = 0, down = 0;
        for (ll i = 0; i < s.size(); i++)
        {
            if (s[i] == 'L')
            {
                col--;
            }
            if (s[i] == 'R')
            {
                col++;
            }
            if (s[i] == 'D')
            {
                row--;
            }
            if (s[i] == 'U')
            {
                row++;
            }
            ll prev_l = left, prev_r = right, prev_u = up, prev_d = down;
            left = min(left, col);
            right = max(right, col);
            if ((-left + right + 1) > m)
            {
                left = prev_l;
                right = prev_r;
                break;
            }
            down = min(down, row);
            up = max(up, row);
            if ((-down + up + 1) > n)
            {
                up = prev_u;
                down = prev_d;
                break;
            }
        }
        ll x = -1, y = -1;
        if (left != 0)
        {
            y = -left + 1;
        }
        else
        {
            y = m - right;
        }
        if (down != 0)
        {
            x = n + down;
        }
        else
        {
            x = up + 1;
        }
        cout << x << " " << y << endl;
        t--;
    }

    return 0;
}