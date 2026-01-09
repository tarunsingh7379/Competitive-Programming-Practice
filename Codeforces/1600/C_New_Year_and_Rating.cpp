#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    ll l = -1e18, r = 1e18;
    ll sum = 0, last = -1;
    for (ll i = 0; i < n; i++)
    {
        ll a, b;
        cin >> a >> b;
        if (i == 0)
        {
            if (b == 1)
            {
                l = 1900;
            }
            else
            {
                r = 1899;
            }
        }
        else
        {
            if (b == 1)
            {
                l = max(l, 1900 - sum);
            }
            else
            {
                r = min(r, 1899 - sum);
            }
        }
        sum += a;
    }
    if (l > r)
    {
        cout << "Impossible" << endl;
    }
    else if (r > 1e15)
    {
        cout << "Infinity" << endl;
    }
    else
    {
        cout << r + sum << endl;
    }

    return 0;
}