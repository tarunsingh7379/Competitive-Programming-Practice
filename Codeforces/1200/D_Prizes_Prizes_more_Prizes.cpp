#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

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
    ll p[5];
    for (ll i = 0; i < 5; i++)
    {
        cin >> p[i];
    }
    vector<pair<ll, ll>> price;
    for (ll i = 0; i < 5; i++)
    {
        price.push_back({p[i], i});
    }
    sort(price.begin(), price.end());
    reverse(price.begin(), price.end());
    vector<ll> ans(5, 0);
    ll have = 0;
    for (ll i = 0; i < n; i++)
    {
        have += a[i];
        while (1)
        {
            ll can = 0;
            for (ll j = 0; j < 5; j++)
            {
                if (price[j].first <= have)
                {
                    ll x = have / (price[j].first);
                    have -= x * price[j].first;
                    ans[price[j].second] += x;
                    can = 1;
                    break;
                }
            }
            if (!can)
            {
                break;
            }
        }
    }
    for (auto num : ans)
    {
        cout << num << " ";
    }
    cout << endl;
    cout << have << endl;

    return 0;
}