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
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<ll> f(20, 0);
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < 20; j++)
        {
            if (a[i] & (1 << j))
            {
                f[j]++;
            }
        }
    }
    vector<ll> temp(n, 0);
    for (ll j = 0; j < 20; j++)
    {
        for (ll i = n - 1; i >= 0 && f[j] > 0; i--)
        {
            temp[i] += (1 << j);
            f[j]--;
        }
    }
    ll ans = 0;
    for (auto num : temp)
    {
        ans = ans + num * num;
    }
    cout << ans << endl;
    return 0;
}