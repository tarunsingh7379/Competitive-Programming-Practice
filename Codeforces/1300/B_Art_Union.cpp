#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll m, n;
    cin >> m >> n;
    ll a[m][n];
    for (ll i = 0; i < m; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    vector<int> ans(m, 0);
    for (ll i = 0; i < n; i++)
    {
        int free = 0;
        for (ll j = 0; j < m; j++)
        {
            int start = max(free, ans[j]);
            ans[j] = start + a[j][i];
            free = ans[j];
        }
    }
    for (auto num : ans)
    {
        cout << num << " ";
    }
    return 0;
}