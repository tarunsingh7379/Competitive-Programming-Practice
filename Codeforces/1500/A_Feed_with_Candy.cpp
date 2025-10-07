#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

ll get_ans(ll k, ll start, vector<pair<ll, ll>> &type1, vector<pair<ll, ll>> &type2)
{
    ll ans = 0, ind1 = 0, ind2 = 0;
    ll m1 = type1.size(), m2 = type2.size();
    ll x = start;
    while (ind1 < m1 && ind2 < m2)
    {
        if (x)
        {
            pair<ll, ll> p = type1[ind1];
            if (p.first <= k)
            {
                k += p.second;
                ans++;
                ind1++;
            }
            else
            {
                return ans;
            }
        }
        else
        {
            pair<ll, ll> p = type2[ind2];
            if (p.first <= k)
            {
                k += p.second;
                ans++;
                ind2++;
            }
            else
            {
                return ans;
            }
        }
        x ^= 1;
    }
    if (ind1 < m1)
    {
        pair<ll, ll> p = type1[ind1];
        if (p.first <= k)
        {
            k += p.second;
            ans++;
            ind1++;
        }
        else
        {
            return ans;
        }
    }
    else if (ind2 < m2)
    {
        pair<ll, ll> p = type2[ind2];
        if (p.first <= k)
        {
            k += p.second;
            ans++;
            ind2++;
        }
        else
        {
            return ans;
        }
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, k;
    cin >> n >> k;
    vector<pair<ll, ll>> type1, type2;
    for (ll i = 0; i < n; i++)
    {
        ll type, x, y;
        cin >> type >> x >> y;
        if (type == 0)
        {
            type1.push_back({x, y});
        }
        else
        {
            type2.push_back({x, y});
        }
    }
    sort(type1.begin(), type1.end());
    sort(type2.begin(), type2.end());
    cout << max(get_ans(k, 0, type1, type2), get_ans(k, 1, type1, type2)) << endl;
    return 0;
}