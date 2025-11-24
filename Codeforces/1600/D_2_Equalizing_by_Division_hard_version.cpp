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
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<vector<ll>> val(200005);
    for (ll i = 0; i < n; i++)
    {
        ll cost = 0;
        while (a[i])
        {
            val[a[i]].push_back(cost);
            a[i] /= 2;
            cost++;
        }
    }
    ll ans = 1e12;
    for (ll i = 0; i <= 200004; i++)
    {
        if (val[i].size() >= k)
        {
            ll sum = 0;
            sort(val[i].begin(), val[i].end());
            for (ll j = 0; j < k; j++)
            {
                sum += val[i][j];
            }
            ans = min(ans, sum);
        }
    }
    cout << ans << endl;

    return 0;
}