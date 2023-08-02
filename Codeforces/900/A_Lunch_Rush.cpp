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
    ll ans = -1e16;
    for (ll i = 0; i < n; i++)
    {
        ll f, t;
        cin >> f >> t;
        if (t > k)
            ans = max(ans, f - (t - k));
        else
            ans = max(ans, f);
    }
    cout << ans << endl;
    return 0;
}