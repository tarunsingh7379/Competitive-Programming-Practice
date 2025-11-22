#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t)
    {
        ll n, m, d;
        cin >> n >> m >> d;
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll ans = 0, sum = 0;
        priority_queue<ll, vector<ll>, greater<ll>> pq;
        for (ll i = 0; i < n; i++)
        {
            ans = max(ans, sum + a[i] - d * (i + 1));
            if (a[i] > 0)
            {
                pq.push(a[i]);
                sum += a[i];
            }
            while (pq.size() > m - 1)
            {
                sum -= pq.top();
                pq.pop();
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}