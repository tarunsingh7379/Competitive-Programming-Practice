#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll a, b, c, d, k;
    cin >> a >> b >> c >> d >> k;
    for (ll i = c; i <= d; i++)
    {
        if (k * i >= a && k * i <= b)
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;

    return 0;
}