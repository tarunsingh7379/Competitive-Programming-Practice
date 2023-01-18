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

    vector<ll> a(20), b(20);
    ll p = 1;
    for (ll i = 0; i < 20; i++)
    {
        a[i] = p;
        p *= 3;
    }
    for (ll i = 0; i < 20; i++)
    {
        b[i] = p;
        p *= 3;
    }

    vector<ll> left, right;
    for (ll i = 0; i < (1LL << 20); i++)
    {
        ll sum1 = 0, sum2 = 0;
        for (ll j = 0; j < 20; j++)
        {
            if (i & (1LL << j))
            {
                sum1 += a[j];
                sum2 += b[j];
            }
        }
        left.push_back(sum1);
        right.push_back(sum2);
    }
    sort(left.begin(), left.end());
    sort(right.begin(), right.end());

    while (t)
    {
        ll n;
        cin >> n;
        ll ans = 9e18;

        if (left.back() >= n)
        {
            ll ind = lower_bound(left.begin(), left.end(), n) - left.begin();
            ans = min(ans, left[ind]);
            for (ll i = ind - 1; i >= max(ind - 100, 0LL); i--)
            {
                ll req = n - left[i];
                ll y = *lower_bound(right.begin(), right.end(), req);
                ans = min(ans, left[i] + y);
            }
        }
        else
        {
            ll ind = lower_bound(right.begin(), right.end(), n) - right.begin();
            ans = min(ans, right[ind]);
            for (ll i = ind - 1; i >= max(ind - 100, 0LL); i--)
            {
                ll req = n - right[i];
                if (left.back() >= req)
                {
                    ll y = *lower_bound(left.begin(), left.end(), req);
                    ans = min(ans, right[i] + y);
                }
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}