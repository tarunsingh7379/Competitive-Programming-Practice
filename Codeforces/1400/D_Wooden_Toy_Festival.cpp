#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

bool check(ll mid, vector<ll> &a)
{
    ll cur = -1e9, cnt = 0;
    for (auto num : a)
    {
        if (abs(num - cur) > mid)
        {
            cur = num + mid;
            cnt++;
        }
    }
    return cnt <= 3;
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
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        ll l = 0, r = 1e9;
        ll ans = 1e9;
        while (l <= r)
        {
            ll mid = (l + r) / 2;
            if (check(mid, a))
            {
                ans = mid;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}