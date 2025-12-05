#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll parent[100005];
ll sz[100005];
ll sum[100005];

ll findParent(ll node)
{
    if (parent[node] == node)
    {
        return node;
    }
    return parent[node] = findParent(parent[node]);
}

void uni(ll u, ll v)
{
    ll x = findParent(u);
    ll y = findParent(v);
    if (x == y)
        return;
    if (sz[x] < sz[y])
        swap(x, y);
    parent[y] = x;
    sz[x] += sz[y];
    sum[x] += sum[y];
}

void init(ll n)
{
    for (ll i = 1; i <= n; i++)
    {
        parent[i] = i;
        sz[i] = 1;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;
    vector<long long> a(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    vector<int> order(n);
    for (int i = 0; i < n; i++)
        cin >> order[i];

    init(n);

    vector<ll> ans(n);
    vector<ll> active(n + 2, 0);

    ll best = 0;
    for (ll i = n - 1; i >= 0; i--)
    {
        ans[i] = best;
        int pos = order[i];
        active[pos] = 1;
        sum[pos] = a[pos];
        if (pos - 1 >= 1 && active[pos - 1])
            uni(pos, pos - 1);
        if (pos + 1 <= n && active[pos + 1])
            uni(pos, pos + 1);
        int root = findParent(pos);
        best = max(best, sum[root]);
    }

    for (long long x : ans)
        cout << x << endl;
    return 0;
}
