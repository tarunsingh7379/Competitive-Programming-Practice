#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

/*
x y z
xx xy xz
yx yy yz
zx zy zz
((xy)*(xz))/(yz) = x*x
*/

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    ll a[n][n];
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    for (ll i = 0; i < n - 2; i++)
    {
        ll x = sqrtl((a[i][i + 1] * a[i][i + 2]) / a[i + 1][i + 2]);
        cout << x << " ";
    }
    ll x = sqrt((a[n - 3][n - 2] * a[n - 1][n - 2]) / a[n - 3][n - 1]);
    cout << x << " ";
    x = sqrt((a[n - 1][n - 3] * a[n - 1][n - 2]) / a[n - 2][n - 3]);
    cout << x << endl;

    return 0;
}