#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

void dfs(vector<ll> a, vector<char> &b, ll ind, ll &ans)
{
    if (a.size() == 1)
    {
        ans = min(ans, a[0]);
        return;
    }
    for (ll i = 0; i < a.size(); i++)
    {
        for (ll j = i + 1; j < a.size(); j++)
        {
            vector<ll> next;
            for (ll k = 0; k < a.size(); k++)
            {
                if (k != i && k != j)
                    next.push_back(a[k]);
            }
            ll val;
            if (b[ind] == '+')
                val = a[i] + a[j];
            else
                val = a[i] * a[j];
            next.push_back(val);
            dfs(next, b, ind + 1, ans);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<ll> a;
    vector<char> b;
    for (ll i = 0; i < 4; i++)
    {
        ll x;
        cin >> x;
        a.push_back(x);
    }
    for (ll i = 0; i < 3; i++)
    {
        char x;
        cin >> x;
        b.push_back(x);
    }
    ll ans = LLONG_MAX;
    dfs(a, b, 0, ans);
    cout << ans << endl;

    return 0;
}