#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, k, q;
    cin >> n >> k >> q;
    vector<ll> v(200005, 0);
    for (ll i = 0; i < n; i++)
    {
        ll x, y;
        cin >> x >> y;
        v[x]++;
        v[y + 1]--;
    }
    vector<ll> admissible;
    ll sum = 0;
    for (ll i = 0; i <= 200000; i++)
    {
        sum += v[i];
        if (sum >= k)
        {
            admissible.push_back(i);
        }
    }
    while (q--)
    {
        ll x, y;
        cin >> x >> y;
        ll ans = upper_bound(admissible.begin(), admissible.end(), y) - lower_bound(admissible.begin(), admissible.end(), x);
        cout << ans << endl;
    }

    return 0;
}