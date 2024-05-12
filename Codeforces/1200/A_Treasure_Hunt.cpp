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
    int x, y;
    cin >> x >> y;
    if ((x2 - x1) % x == 0 && (y2 - y1) % y == 0)
    {
        int a = abs(x2 - x1) / x, b = abs(y2 - y1) / y;
        if (a % 2 == b % 2)
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

    return 0;
}