#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

ll func(ll cnt1, ll cnt2, ll a, ll b, ll n)
{
    if (cnt1 == 0 && cnt2 == 0)
        return 0;
    ll ans = 1e8;
    for (ll i = 0; i <= cnt1 && i * a <= n; i++)
    {
        for (ll j = (i == 0); j <= cnt2 && i * a + j * b <= n; j++)
        {
            ans = min(ans, 1 + func(cnt1 - i, cnt2 - j, a, b, n));
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
    ll a, b;
    cin >> a >> b;

    cout << func(4, 2, a, b, n) << endl;
    return 0;
}