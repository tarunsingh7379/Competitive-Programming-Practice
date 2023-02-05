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

    ll n;
    cin >> n;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (n == 1 || n == 2)
    {
        cout << n << endl;
    }
    else
    {
        vector<ll> right(n);
        right[n - 1] = 1;
        for (ll i = n - 2; i >= 0; i--)
        {
            if (a[i] < a[i + 1])
            {
                right[i] = right[i + 1] + 1;
            }
            else
            {
                right[i] = 1;
            }
        }
        ll ans = 0, cnt = 1;
        for (ll i = 0; i < n; i++)
        {
            if (i >= 2)
            {
                if (a[i - 1] > a[i - 2])
                {
                    cnt++;
                }
                else
                {
                    cnt = 1;
                }
            }
            if (i == 0)
            {
                ans = max(ans, right[i + 1] + 1);
            }
            else if (i < n - 1)
            {
                if (a[i - 1] + 1 < a[i + 1])
                {
                    ans = max(ans, cnt + 1 + right[i + 1]);
                }
                else
                {
                    ans = max(ans, cnt + 1);
                    ans = max(ans, right[i + 1] + 1);
                }
            }
            else
            {
                ans = max(ans, cnt + 1);
            }
        }
        cout << ans << endl;
    }

    return 0;
}