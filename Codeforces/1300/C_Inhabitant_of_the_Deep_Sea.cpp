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
        ll n, k;
        cin >> n >> k;
        deque<ll> dq;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            dq.push_back(x);
        }
        ll ans = 0;
        while (dq.size() > 1 && k > 0)
        {
            ll mi = min(dq.front(), dq.back());
            if (k >= 2 * mi)
            {
                dq.front() -= mi;
                dq.back() -= mi;
                k -= 2 * mi;
            }
            else
            {
                dq.front() -= (k + 1) / 2;
                dq.back() -= k / 2;
                k = 0;
            }
            if (dq.front() == 0)
            {
                dq.pop_front();
            }
            if (dq.back() == 0)
            {
                dq.pop_back();
            }
        }
        if (dq.size() >= 1 && dq.front() <= k)
        {
            ans++;
        }
        ans += (n - dq.size());
        cout << ans << endl;
        t--;
    }

    return 0;
}