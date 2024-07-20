#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;
/*
a^2 -a*d +d = 0
a = (d + sqrt(d^2-4*d))/2
*/

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t)
    {
        double d;
        cin >> d;
        double x = d * d - 4 * d;
        if (x < 0)
        {
            cout << "N" << endl;
        }
        else
        {
            double a = (d + sqrtl(x)) / 2.0;
            double b = (d - sqrtl(x)) / 2.0;
            cout << fixed << setprecision(12);
            cout << "Y " << a << " " << b << endl;
        }
        t--;
    }

    return 0;
}