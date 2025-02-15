#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

bool check(ll ind, vector<ll> &prefix, ll cur_damage, ll tot_damage)
{
    ll sum = prefix[ind] - tot_damage - cur_damage;
    return (sum <= 0);
}

ll get_died_warriors(vector<ll> &prefix, ll cur_damage, ll tot_damage)
{
    ll l = 0, r = prefix.size() - 1;
    ll ans = 0;
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        if (check(mid, prefix, cur_damage, tot_damage))
        {
            ans = mid + 1;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, q;
    cin >> n >> q;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<ll> prefix(n, 0);
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        sum += a[i];
        prefix[i] = sum;
    }
    ll ans = n;
    ll died = 0;
    ll tot_damage = 0;
    while (q--)
    {
        ll cur_damage;
        cin >> cur_damage;
        died = get_died_warriors(prefix, cur_damage, tot_damage);
        tot_damage += cur_damage;
        if (died == n)
        {
            ans = n;
            died = 0;
            tot_damage = 0;
        }
        else
        {
            ans = n - died;
        }
        cout << ans << endl;
    }

    return 0;
}