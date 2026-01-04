#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, k, s;
    cin >> n >> k >> s;
    bool ok = true;
    if (k > s || (k * (n - 1)) < s)
    {
        ok = false;
    }

    if (!ok)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
        ll x = 1;
        while (s > 0)
        {
            ll d = min(n - 1, s - (k - 1));
            if (x - d > 0)
            {
                cout << x - d << " ";
                x = x - d;
            }
            else
            {
                cout << x + d << " ";
                x = x + d;
            }
            s -= d;
            k--;
        }
        cout << endl;
    }

    return 0;
}