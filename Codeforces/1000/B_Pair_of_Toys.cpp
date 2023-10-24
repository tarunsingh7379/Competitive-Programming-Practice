#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, k;
    cin >> n >> k;

    if (n < k)
    {
        ll x = n, y = k - n;
        ll l = x - y + 1;
        if (x <= y)
        {
            l = 0;
        }
        cout << l / 2 << endl;
    }
    else
    {
        ll x = k - 1, y = 1;
        ll l = x - y + 1;
        if (x <= y)
        {
            l = 0;
        }
        cout << l / 2 << endl;
    }

    return 0;
}