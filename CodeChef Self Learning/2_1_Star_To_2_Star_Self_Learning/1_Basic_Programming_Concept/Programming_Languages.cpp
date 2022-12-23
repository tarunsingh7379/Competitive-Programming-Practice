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
        ll a, b, a1, b1, a2, b2;
        cin >> a >> b >> a1 >> b1 >> a2 >> b2;
        if ((a == a1 || a == b1) && (b == a1 || b == b1))
        {
            cout << 1 << endl;
        }
        else if ((a == a2 || a == b2) && (b == a2 || b == b2))
        {
            cout << 2 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
        t--;
    }

    return 0;
}