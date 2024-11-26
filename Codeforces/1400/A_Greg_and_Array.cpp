#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m, k;
    cin >> n >> m >> k;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<vector<ll>> op(m, vector<ll>(3, 0));
    for (ll i = 0; i < m; i++)
    {
        cin >> op[i][0] >> op[i][1] >> op[i][2];
        op[i][0]--;
        op[i][1]--;
    }
    vector<ll> op_freq(m + 1, 0);
    for (ll i = 0; i < k; i++)
    {
        ll x, y;
        cin >> x >> y;
        x--;
        y--;
        op_freq[x]++;
        op_freq[y + 1]--;
    }
    ll sum = 0;
    vector<ll> ans(n + 1, 0);
    for (ll i = 0; i < m; i++)
    {
        sum += op_freq[i];
        ans[op[i][0]] += sum * op[i][2];
        ans[op[i][1] + 1] -= sum * op[i][2];
    }
    sum = 0;
    for (ll i = 0; i < n; i++)
    {
        sum += ans[i];
        cout << sum + a[i] << " ";
    }
    cout << endl;

    return 0;
}