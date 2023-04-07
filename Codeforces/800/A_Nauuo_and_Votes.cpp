#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x, y, z;
    cin >> x >> y >> z;

    if (x > (y + z))
    {
        cout << "+" << endl;
    }
    else if (y > (x + z))
    {
        cout << "-" << endl;
    }
    else if (z == 0 && x == y)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << "?" << endl;
    }

    return 0;
}