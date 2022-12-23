#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

ll dp[51][51];

ll func(ll i, ll k, ll n, vector<ll> &a)
{
    if (i >= n)
    {
        if (k == 0)
        {
            return (1LL << 60) - 1;
        }
        return 0;
    }
    if (dp[i][k] != -1)
    {
        return dp[i][k];
    }
    ll ans = 0;
    ll sum = 0;
    for (ll j = i; j < n; j++)
    {
        sum = sum + a[j];
        ll z = func(j + 1, k - 1, n, a);
        ll cost = sum & z;
        ans = max(ans, cost);
    }
    return dp[i][k] = ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    memset(dp, -1, sizeof(dp));
    cout << func(0, k, n, a) << endl;
    return 0;
}