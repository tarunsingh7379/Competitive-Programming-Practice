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
        ll u, v, a, s;
        cin >> u >> v >> a >> s;
        double x = u * u - 2 * a * s;
        if (x <= 0)
        {
            cout << "Yes" << endl;
        }
        else
        {
            x = sqrtl(x);
            if (x <= v)
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
        t--;
    }

    return 0;
}