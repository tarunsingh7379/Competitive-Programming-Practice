#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

ll check(ll n)
{
    if (n < 10)
    {
        return n;
    }
    ll res = 1;
    ll temp = n;
    while (temp)
    {
        ll r = temp % 10;
        temp /= 10;
        if (r)
            res *= r;
    }
    return check(res);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    vector<vector<ll>> prefix(10, vector<ll>(1000001, 0));
    for (ll i = 1; i <= 1000000; i++)
    {
        ll x = check(i);
        for (ll j = 1; j <= 9; j++)
        {
            prefix[j][i] = prefix[j][i - 1];
        }
        prefix[x][i]++;
    }
    while (t)
    {
        ll l, r, k;
        cin >> l >> r >> k;
        ll ans = prefix[k][r] - prefix[k][l - 1];
        cout << ans << endl;
        t--;
    }

    return 0;
}