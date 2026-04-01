#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

ll get_res(ll n, ll k, ll m, ll d)
{
    ll ans = 0;
    ll upper = 1;
    for (ll i = n; i > n - m; i--)
    {
        upper = (upper * i);
    }
    ll lower = 1;
    for (ll i = 1; i <= m; i++)
    {
        lower = (lower * i);
    }
    ans = upper / lower;
    return ans * d;
}

void build_derangement(vector<ll> &d, ll k)
{
    for (ll i = 0; i <= k; i++)
    {
        vector<ll> a(i, 0);
        for (ll j = 0; j < a.size(); j++)
        {
            a[j] = j;
        }
        do
        {
            ll cnt = 0;
            for (ll j = 0; j < a.size(); j++)
            {
                if (a[j] != j)
                {
                    cnt++;
                }
            }
            if (cnt == a.size())
                d[i]++;
        } while (next_permutation(a.begin(), a.end()));
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, k;
    cin >> n >> k;
    ll ans = 0;
    vector<ll> d(k + 1, 0);
    build_derangement(d, k);
    for (ll i = 0; i <= k; i++)
    {
        ans += get_res(n, k, i, d[i]);
    }
    cout << ans << endl;

    return 0;
}