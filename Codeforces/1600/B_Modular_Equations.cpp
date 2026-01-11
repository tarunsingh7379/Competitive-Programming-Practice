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
    if (n == k)
    {
        cout << "infinity" << endl;
    }
    else if (n < k)
    {
        cout << 0 << endl;
    }
    else
    {
        ll m = n - k;
        ll ans = 0;
        for (ll i = 1; i * i <= m; i++)
        {
            if (m % i == 0)
            {
                if (i > k)
                    ans++;
                if (m / i != i && (m / i) > k)
                    ans++;
            }
        }
        cout << ans << endl;
    }

    return 0;
}