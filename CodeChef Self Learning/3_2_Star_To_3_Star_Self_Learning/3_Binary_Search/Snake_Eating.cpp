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
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        ll prefix[n] = {0};
        prefix[0] = a[0];
        for (ll i = 1; i < n; i++)
        {
            prefix[i] = prefix[i - 1] + a[i];
        }
        while (m--)
        {
            ll k;
            cin >> k;
            ll ind = lower_bound(a, a + n, k) - a;
            ll cnt = n - ind;
            ll right = ind - 1;
            ll l = 0, r = ind - 1;
            ll ans = 0;
            while (l <= r)
            {
                ll mid = (l + r) / 2;
                ll sum = prefix[right];
                if (mid - 1 >= 0)
                {
                    sum -= prefix[mid - 1];
                }
                ll req = (right - mid + 1) * k - sum;

                if (req <= mid)
                {
                    ans = (right - mid + 1);
                    r = mid - 1;
                }
                else
                {
                    l = mid + 1;
                }
            }
            cnt += ans;
            cout << cnt << endl;
        }
        t--;
    }

    return 0;
}