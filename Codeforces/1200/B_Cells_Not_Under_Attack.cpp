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
    ll total = n * n;
    set<ll> st1, st2;
    for (ll i = 0; i < m; i++)
    {
        ll x, y;
        cin >> x >> y;
        st1.insert(x);
        st2.insert(y);
        ll row_under_attack = st1.size(), col_under_attack = st2.size();
        ll total_cells_under_attack = row_under_attack * n + col_under_attack * n - row_under_attack * col_under_attack;
        cout << n * n - total_cells_under_attack << " ";
    }

    return 0;
}