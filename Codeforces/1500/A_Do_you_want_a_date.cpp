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
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    reverse(a, a + n);
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        ll add = (a[i] * power(2, n - 1 - i, M)) % M;
        ll sub = (a[i] * power(2, i, M)) % M;
        ans = (ans + add - sub + M) % M;
    }
    cout << ans << endl;

    return 0;
}