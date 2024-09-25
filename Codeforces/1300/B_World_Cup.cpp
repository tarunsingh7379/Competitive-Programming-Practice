#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

ll check(ll k, vector<ll> a)
{
    ll n = a.size();
    ll ind = k % n;
    a[ind] -= k;
    if (a[ind] <= 0)
    {
        return ind;
    }
    return -1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        ll x = (a[i] - i + n - 1) / n;
        ll cost = i + x * n;
        v.push_back({cost, i + 1});
    }
    sort(v.begin(), v.end());
    cout << v[0].second << endl;

    return 0;
}