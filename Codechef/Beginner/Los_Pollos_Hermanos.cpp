#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

ll power(ll base, ll n, ll m)
{
    ll ans = 1;
    while (n != 0)
    {
        if (n % 2 == 1)
        {
            n = n - 1;
            ans = (ans * base) % m;
        }
        else
        {
            n = n / 2;
            base = (base * base) % m;
        }
    }
    return ans;
}

ll nC2(ll n)
{
    if (n < 0)
    {
        return 0;
    }
    return (n * (n - 1)) / 2;
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
        vector<pair<ll, ll>> v;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            v.push_back({x, i});
        }

        sort(v.begin(), v.end());

        ll ans[n] = {0};

        for (ll i = 0; i < n; i++)
        {
            ll first = (power(2, i, M) - 1 + M) % M;
            ll second = ((n - i - 1) * power(2, i, M)) % M;
            ll third = (nC2(n - i - 1) * power(2, i, M)) % M;
            ans[v[i].second] = ((first + second) % M + third) % M;
        }

        for (ll i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;

        t--;
    }

    return 0;
}