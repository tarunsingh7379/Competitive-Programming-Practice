#include <bits/stdc++.h>
typedef long long int ll;
#define M 998244353
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    ll a[n + 1];
    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j += i)
        {
            a[i] = max(a[i], a[j]);
        }
    }
    sort(a + 1, a + n + 1);
    ll ans = 0, p = 1;
    for (ll i = 1; i <= n; i++)
    {
        ans = (ans + (p * a[i]) % M) % M;
        p = (p * 2) % M;
    }
    cout << ans << endl;

    return 0;
}