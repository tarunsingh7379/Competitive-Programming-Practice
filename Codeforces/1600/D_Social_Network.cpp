#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

ll parent[100005];
ll sz[100005];

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
    ll n, k;
    cin >> n >> k;
    init(n);
    vector<ll> ans;
    ll cnt = 0;
    for (ll i = 0; i < k; i++)
    {
        ll u, v;
        cin >> u >> v;
        if (findParent(u) != findParent(v))
        {
            uni(u, v);
            cnt++;
        }
        set<ll> st;
        for (ll j = 1; j <= n; j++)
        {
            st.insert(findParent(j));
        }
        vector<ll> a;
        for (auto num : st)
        {
            a.push_back(sz[num]);
        }
        sort(a.begin(), a.end());
        reverse(a.begin(), a.end());
        ll rem = (i + 1) - cnt;
        ll x = 0;
        for (ll j = 0; j <= rem && j < a.size(); j++)
        {
            x += a[j];
        }
        ans.push_back(x - 1);
    }
    for (auto num : ans)
    {
        cout << num << endl;
    }

    return 0;
}