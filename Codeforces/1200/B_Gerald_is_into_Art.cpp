#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b;
    cin >> a >> b;
    int x, y, p, q;
    cin >> x >> y >> p >> q;
    if ((x + p) <= a && max(y, q) <= b)
    {
        cout << "YES" << endl;
    }
    else if ((x + q) <= a && max(y, p) <= b)
    {
        cout << "YES" << endl;
    }
    else if ((y + p) <= a && max(x, q) <= b)
    {
        cout << "YES" << endl;
    }
    else if ((y + q) <= a && max(x, p) <= b)
    {
        cout << "YES" << endl;
    }
    else if ((x + p) <= b && max(y, q) <= a)
    {
        cout << "YES" << endl;
    }
    else if ((x + q) <= b && max(y, p) <= a)
    {
        cout << "YES" << endl;
    }
    else if ((y + p) <= b && max(x, q) <= a)
    {
        cout << "YES" << endl;
    }
    else if ((y + q) <= b && max(x, p) <= a)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}