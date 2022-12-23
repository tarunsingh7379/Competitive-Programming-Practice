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
        ll x, y, z;
        cin >> x >> y >> z;
        if ((x == (y + z)) || (y == (x + z)) || (z == (x + y)))
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
        t--;
    }

    return 0;
}