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
        ll n, m;
        cin >> n >> m;
        ll flag = 1;
        for (ll i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                if (i <= m)
                {
                    flag = 0;
                    break;
                }
                if (n / i <= m)
                {
                    flag = 0;
                    break;
                }
            }
        }
        if (n <= m && n != 1)
        {
            flag = 0;
        }
        cout << (flag ? "YES" : "NO") << endl;
        t--;
    }

    return 0;
}