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

    if (k < n / 2)
    {
        cout << -1 << endl;
    }
    else if (n == 1)
    {
        if (k == 0)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    else
    {
        ll x = k - (n - 2) / 2;
        cout << x << " " << 2 * x << " ";
        ll cnt = 1;
        for (ll i = 1; i <= n - 2; i++)
        {
            while (cnt == x || cnt == 2 * x)
            {
                cnt++;
            }
            cout << cnt << " ";
            cnt++;
        }
        cout << endl;
    }

    return 0;
}