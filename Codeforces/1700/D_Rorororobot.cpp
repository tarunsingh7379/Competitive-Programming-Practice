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
    vector<ll> a(m);
    for (ll i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    ll size = log2(m) + 1;
    ll sparse[m][size];
    for (ll j = 0; j <= log2(m); j++)
    {
        for (ll i = 0; i + (1 << j) <= m; i++)
        {
            if (j == 0)
            {
                sparse[i][j] = a[i];
            }
            else
            {
                sparse[i][j] = max(sparse[i][j - 1], sparse[i + (1 << (j - 1))][j - 1]);
            }
        }
    }
    ll q;
    cin >> q;
    while (q--)
    {
        ll x1, y1, x2, y2, k;
        cin >> x1 >> y1 >> x2 >> y2 >> k;
        if (abs(x1 - x2) % k != 0 || abs(y1 - y2) % k != 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            ll l = y1 - 1, r = y2 - 1;
            if (l > r)
            {
                swap(l, r);
            }
            ll len = log2(r - l + 1);
            ll ma = max(sparse[l][len], sparse[r - (1 << len) + 1][len]);
            if (x1 > x2)
            {
                swap(x1, x2);
            }
            ll mx = ((n - x1) / k) * k + x1;
            if (mx > ma)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}