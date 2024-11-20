#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

ll parent[105];
ll sz[105];

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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    init(m);
    set<int> st;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        if (k == 0)
        {
            cnt++;
        }
        int prev = -1;
        for (int j = 0; j < k; j++)
        {
            int x;
            cin >> x;
            st.insert(x);
            if (prev == -1)
            {
                prev = x;
            }
            uni(prev, x);
        }
    }
    set<int> ans;
    for (auto it : st)
    {
        ans.insert(findParent(it));
    }
    ll res = cnt;
    if (ans.size() > 0)
    {
        res = res + ans.size() - 1;
    }
    cout << res << endl;
    return 0;
}