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
        double basic;
        cin >> basic;
        double ans;
        double h, d;
        if (basic < 1500)
        {
            h = basic * (0.1);
            d = basic * (0.9);
        }
        else
        {
            h = 500;
            d = basic * (0.98);
        }
        ans = basic + h + d;
        cout << fixed << setprecision(6);
        cout << ans << endl;
        t--;
    }

    return 0;
}