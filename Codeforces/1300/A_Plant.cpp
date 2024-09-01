#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

ll power(ll base, ll n, ll m)
{
    ll ans = 1;
    base = base % m;
    while (n != 0)
    {
        if (n % 2 == 1)
        {
            n = n - 1;
            ans = (ans * base) % m;
        }
        else
        {
            n = n / 2;
            base = (base * base) % m;
        }
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;

    ll ans = (((power(2, n, M) + power(4, n, M)) % M) * power(2, M - 2, M)) % M;
    cout << ans << endl;

    return 0;
}
