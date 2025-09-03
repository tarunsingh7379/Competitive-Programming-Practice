#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, k1, k2;
    cin >> n >> k1 >> k2;
    ll a[n], b[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    vector<ll> diff;
    priority_queue<ll> pq;
    for (ll i = 0; i < n; i++)
    {
        pq.push(abs(a[i] - b[i]));
    }
    ll k = k1 + k2;
    ll ans = 0;
    while (k > 0)
    {
        ll x = pq.top();
        pq.pop();
        x--;
        k--;
        pq.push(abs(x));
    }
    while (!pq.empty())
    {
        ll x = pq.top();
        pq.pop();
        ans = ans + x * x;
    }
    cout << ans << endl;

    return 0;
}