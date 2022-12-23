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
        double x1, x2, x3, v1, v2;
        cin >> x1 >> x2 >> x3 >> v1 >> v2;
        double d1 = x3 - x1;
        double d2 = x2 - x3;
        double t1 = d1 / v1;
        double t2 = d2 / v2;
        if (t1 == t2)
        {
            cout << "Draw" << endl;
        }
        else if (t1 < t2)
        {
            cout << "Chef" << endl;
        }
        else
        {
            cout << "Kefa" << endl;
        }
        t--;
    }

    return 0;
}