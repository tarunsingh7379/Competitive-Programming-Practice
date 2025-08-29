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
        ll n, k;
        cin >> n >> k;
        ll ans = 0, sum = 0, cur = 1;
        ll x = n + 1;
        while (n >= k)
        {
            if (n & 1)
            {
                sum += cur;
            }
            n >>= 1;
            cur <<= 1;
        }
        ans = x * sum / 2;
        cout << ans << endl;
        t--;
    }

    return 0;
}