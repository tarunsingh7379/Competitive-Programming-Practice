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
    vector<ll> v;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        v.push_back(a[i]);
    }
    sort(v.begin(), v.end());
    ll res = ((v[0] * v[1]) % M * v[2]) % M;
    vector<pair<ll, ll>> left(n), right(n);
    left[0] = {a[0], 1};
    for (ll i = 1; i < n; i++)
    {
        left[i] = left[i - 1];
        if (a[i] < left[i].first)
        {
            left[i].first = a[i];
            left[i].second = 1;
        }
        else if (a[i] == left[i].first)
        {
            left[i].second++;
        }
    }
    right[n - 1] = {a[n - 1], 1};
    for (ll i = n - 2; i >= 0; i--)
    {
        right[i] = right[i + 1];
        if (a[i] < right[i].first)
        {
            right[i].first = a[i];
            right[i].second = 1;
        }
        else if (a[i] == right[i].first)
        {
            right[i].second++;
        }
    }
    ll ans = 0;
    for (ll i = 1; i < n - 1; i++)
    {
        ll cur = ((left[i - 1].first * a[i]) % M * right[i + 1].first) % M;
        if (cur == res)
        {
            ans += (left[i - 1].second * right[i + 1].second);
        }
    }
    cout << ans << endl;

    return 0;
}