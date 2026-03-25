#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int spf[10000001];

void createSieve()
{
    int n = 10000000;
    for (int i = 1; i <= n; i++)
    {
        spf[i] = i;
    }

    for (int i = 2; i * i <= n; i++)
    {
        if (spf[i] == i)
        {
            for (int j = i * i; j <= n; j += i)
            {
                if (spf[j] == j)
                    spf[j] = i;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    createSieve();
    while (t)
    {
        int x, y;
        cin >> x >> y;
        if (__gcd(x, y) > 1)
        {
            cout << 0 << endl;
        }
        else if (y - x == 1)
        {
            cout << -1 << endl;
        }
        else
        {
            int d = y - x;
            int ans = INT_MAX;
            while (d > 1)
            {
                int p = spf[d];
                ans = min(ans, (p - (x % p)) % p);
                while (d % p == 0)
                {
                    d /= p;
                }
            }
            cout << ans << endl;
        }
        t--;
    }

    return 0;
}