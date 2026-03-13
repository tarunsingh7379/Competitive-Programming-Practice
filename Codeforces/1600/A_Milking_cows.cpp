#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<ll> suffix(n, 0);
    ll cnt = 0;
    for (ll i = n - 1; i >= 0; i--)
    {
        if (a[i] == 0)
        {
            cnt++;
        }
        suffix[i] = cnt;
    }
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            ans = ans + suffix[i];
        }
    }
    cout << ans << endl;

    return 0;
}