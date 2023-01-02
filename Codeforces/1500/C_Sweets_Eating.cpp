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
    vector<ll> dp(m, 0), a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        dp[i % m] += a[i];
        sum += dp[i % m];
        cout << sum << " ";
    }

    return 0;
}