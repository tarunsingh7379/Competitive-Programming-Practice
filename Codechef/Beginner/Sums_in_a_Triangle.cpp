#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

ll a[101][101];
ll n;
ll dp[101][101];

ll func(ll i, ll j)
{

    if (i >= n)
    {
        return 0;
    }

    if (dp[i][j] != -1)
    {
        return dp[i][j];
    }

    ll ans = INT_MIN;

    ans = max(ans, a[i][j] + func(i + 1, j));
    ans = max(ans, a[i][j] + func(i + 1, j + 1));

    return dp[i][j] = ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t)
    {

        cin >> n;
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j <= i; j++)
            {
                cin >> a[i][j];
            }
        }
        memset(dp, -1, sizeof(dp));
        cout << func(0, 0) << endl;
        t--;
    }

    return 0;
}