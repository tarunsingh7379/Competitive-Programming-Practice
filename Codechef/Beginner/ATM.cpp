#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll x;
    double y;
    cin >> x >> y;
    cout << fixed << setprecision(2);
    if (x % 5 == 0 && x <= (y - 0.5))
    {
        cout << (y - x - 0.5) << endl;
    }
    else
    {
        cout << y << endl;
    }

    return 0;
}