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
    priority_queue<ll, vector<ll>, greater<ll>> pq;
    ll health = 0;
    for (ll i = 0; i < n; i++)
    {
        health += a[i];
        pq.push(a[i]);
        if (health < 0)
        {
            ll x = pq.top();
            health -= x;
            pq.pop();
        }
    }
    cout << pq.size() << endl;
    return 0;
}