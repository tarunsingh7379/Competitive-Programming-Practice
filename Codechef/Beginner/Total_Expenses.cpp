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
        double n, p;
        cin >> n >> p;
        double ans = n * p;
        if (n > 1000)
        {
            ans = ans - ans / 10;
        }
        cout << fixed << setprecision(6);
        cout << ans << endl;
        t--;
    }

    return 0;
}