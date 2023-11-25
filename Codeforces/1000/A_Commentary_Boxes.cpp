#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m, a, b;
    cin >> n >> m >> a >> b;

    ll r = n % m;
    if (r == 0)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << min(r * b, (m - r) * a) << endl;
    }

    return 0;
}