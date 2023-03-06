#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

ll func(ll ind, ll top, vector<vector<ll>> &a)
{
    if (ind >= a.size())
    {
        return 0;
    }
    ll ans = 0;

    ll pick = a[top][ind] + func(ind + 1, !top, a) + func(ind + 2, top, a);
    ll notPick = max(func(ind + 1, top, a), func(ind + 1, !top, a));

    return max(pick, notPick);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;

    vector<vector<ll>> a(2);

    for (ll j = 0; j < 2; j++)
    {
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            a[j].push_back(x);
        }
    }

    ll ans = max(func(0, 0, a), func(0, 1, a));
    cout << ans << endl;

    return 0;
}