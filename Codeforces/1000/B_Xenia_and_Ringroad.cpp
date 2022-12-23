#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m;
    cin >> n >> m;
    ll ans = 0, prev = 1;
    for (ll i = 0; i < m; i++)
    {
        ll x;
        cin >> x;
        if (x >= prev)
        {
            ans += (x - prev);
        }
        else
        {
            ans += (n - prev + x);
        }
        prev = x;
    }
    cout << ans << endl;
    return 0;
}