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
        ll x, y;
        cin >> x >> y;
        if (x == y)
        {
            cout << 0 << endl;
        }
        else
        {
            if (x < y)
            {
                ll d = abs(y - x);
                if (d % 2 != 0)
                {
                    cout << 1 << endl;
                }
                else if (d % 2 == 0 && d % 4 != 0)
                {
                    cout << 2 << endl;
                }
                else
                {
                    cout << 3 << endl;
                }
            }
            else
            {
                ll d = abs(x - y);
                if (d % 2 == 0)
                {
                    cout << 1 << endl;
                }
                else
                {
                    cout << 2 << endl;
                }
            }
        }
        t--;
    }

    return 0;
}