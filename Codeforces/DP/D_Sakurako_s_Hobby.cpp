#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

ll parent[200005];
ll sz[200005];

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
    ll paru = findParent(u);
    ll parv = findParent(v);
    if (sz[paru] < sz[parv])
    {
        parent[paru] = parv;
        sz[parv] += sz[paru];
    }
    else
    {
        parent[parv] = paru;
        sz[paru] += sz[parv];
    }
}

void init(ll n, string &s)
{
    for (ll i = 1; i <= n; i++)
    {
        parent[i] = i;
        if (s[i - 1] == '0')
            sz[i] = 1;
        else
            sz[i] = 0;
    }
}

void dfs(ll idx, vector<ll> &vis, vector<ll> &a)
{
    if (vis[idx])
        return;
    vis[idx] = 1;
    uni(idx + 1, a[idx]);
    dfs(a[idx] - 1, vis, a);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t)
    {
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        string s;
        cin >> s;
        init(n, s);
        vector<ll> vis(n + 1, 0);
        for (ll i = 0; i < n; i++)
        {
            dfs(i, vis, a);
        }
        for (ll i = 1; i <= n; i++)
        {
            cout << sz[findParent(i)] / 2 << " ";
        }
        cout << endl;
        t--;
    }

    return 0;
}