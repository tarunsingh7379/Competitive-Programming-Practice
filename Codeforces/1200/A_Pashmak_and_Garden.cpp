#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    if (y1 == y2)
    {
        int d = abs(x1 - x2);
        cout << x1 << " " << y1 + d << " " << x2 << " " << y1 + d << endl;
    }
    else if (x1 == x2)
    {
        int d = abs(y1 - y2);
        cout << x1 + d << " " << y1 << " " << x1 + d << " " << y2 << endl;
    }
    else
    {
        int dx = abs(x1 - x2);
        int dy = abs(y1 - y2);
        if (dx != dy)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << x2 << " " << y1 << " " << x1 << " " << y2 << endl;
        }
    }

    return 0;
}