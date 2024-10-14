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
        ll n, m;
        cin >> n >> m;
        vector<ll> a(n), b(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (ll i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        vector<ll> prefix(n, 0);
        prefix[0] = b[0];
        for (ll i = 1; i < n; i++)
        {
            prefix[i] = prefix[i - 1] + b[i];
        }
        ll ans = 0, prev_ans = 0, sum = 0, last = -1, second_last = -1;
        for (int i = 0; i < n; i++)
        {
            if (a[i] <= b[i])
            {
                prev_ans = ans;
                ans += sum;
                ans += a[i];
                sum = 0;
                second_last = last;
                last = i;
                if (last >= n - m)
                {
                    break;
                }
            }
            else
            {
                sum += b[i];
            }
        }
        if (last >= n - m)
        {
            ll x = INT_MAX;
            for (ll i = n - m; i < n; i++)
            {
                ll left = prefix[i];
                if (second_last != -1)
                    left -= prefix[second_last];
                left -= b[i];
                x = min(x, left + a[i]);
            }
            cout << min(ans, prev_ans + x) << endl;
        }
        else
        {
            ll x = INT_MAX;
            for (ll i = n - m; i < n; i++)
            {
                ll left = prefix[i];
                if (last != -1)
                {
                    left -= prefix[last];
                }
                left -= b[i];
                x = min(x, left + a[i]);
            }
            cout << ans + x << endl;
        }
        t--;
    }

    return 0;
}