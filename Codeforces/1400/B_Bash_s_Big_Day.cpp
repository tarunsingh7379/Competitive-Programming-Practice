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
    map<ll, ll> mp;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 2; j * j <= a[i]; j++)
        {
            if (a[i] % j == 0)
            {
                mp[j]++;
                while (a[i] % j == 0)
                {
                    a[i] /= j;
                }
            }
        }
        if (a[i] > 1)
        {
            mp[a[i]]++;
        }
    }

    ll ans = 1;
    for (auto num : mp)
    {
        ans = max(ans, num.second);
    }
    cout << ans << endl;

    return 0;
}