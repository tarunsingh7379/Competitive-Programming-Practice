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
    string s;
    cin >> s;
    vector<vector<ll>> a(6, vector<ll>(n, 0));

    vector<string> perm = {"abc", "acb", "bac", "bca", "cab", "cba"};
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < n; j++)
        {
            a[i][j] = (j - 1 >= 0 ? a[i][j - 1] : 0) + (s[j] != perm[i][j % 3]);
        }
    }

    while (m--)
    {
        ll l, r;
        cin >> l >> r;
        l--;
        r--;
        ll ans = INT_MAX;
        for (ll i = 0; i < 6; i++)
        {
            ans = min(ans, a[i][r] - (l - 1 >= 0 ? a[i][l - 1] : 0));
        }
        cout << ans << endl;
    }

    return 0;
}