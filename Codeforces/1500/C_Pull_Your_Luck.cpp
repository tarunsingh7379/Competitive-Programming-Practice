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
        ll n, x, p;
        cin >> n >> x >> p;
        x = (n - x) % n;
        ll sum = 0;
        bool ok = false;
        for (ll i = 1; i <= p && i <= 2 * n; i++)
        {
            sum = (sum + i) % n;
            if (sum == x)
            {
                ok = true;
                break;
            }
        }
        cout << (ok ? "Yes" : "No") << endl;
        t--;
    }

    return 0;
}