#include <bits/stdc++.h>
typedef long long int ll;
#define M 100000000
using namespace std;

ll dp[101][101][11][11];

ll func(ll n1, ll n2, ll cnt1, ll cnt2, ll k1, ll k2)
{
    if (n1 == 0 && n2 == 0)
    {
        return 1;
    }
    if (dp[n1][n2][cnt1][cnt2] != -1)
    {
        return dp[n1][n2][cnt1][cnt2];
    }
    ll ans = 0;
    if (cnt1 + 1 <= k1 && n1 > 0)
    {
        ans = (ans + func(n1 - 1, n2, cnt1 + 1, 0, k1, k2)) % M;
    }
    if (cnt2 + 1 <= k2 && n2 > 0)
    {
        ans = (ans + func(n1, n2 - 1, 0, cnt2 + 1, k1, k2)) % M;
    }
    return dp[n1][n2][cnt1][cnt2] = ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n1, n2, k1, k2;
    cin >> n1 >> n2 >> k1 >> k2;
    memset(dp, -1, sizeof(dp));
    ll ans = func(n1, n2, 0, 0, k1, k2);
    cout << ans << endl;
    return 0;
}