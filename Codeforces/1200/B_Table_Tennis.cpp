#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, k;
    cin >> n >> k;
    ll a[n];
    deque<ll> dq;

    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        dq.push_back(a[i]);
    }
    ll ans = n, cnt = 0;
    while (dq.front() != n && cnt < k)
    {
        ll x = dq.front();
        dq.pop_front();
        ll y = dq.front();
        dq.pop_front();
        if (x > y)
        {
            ans = x;
            dq.push_back(y);
            dq.push_front(x);
            cnt++;
        }
        else
        {
            ans = y;
            dq.push_back(x);
            dq.push_front(y);
            cnt = 1;
        }
    }
    cout << ans << endl;
    return 0;
}