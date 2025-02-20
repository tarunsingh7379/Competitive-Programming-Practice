#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

pair<ll, ll> get_sum(ll ind, ll l, ll r)
{
    ll sum1 = ((ind - l + 1) * (l + ind)) / 2;
    ll sum2 = ((r - ind) * (ind + 1 + r)) / 2;
    return {sum1, sum2};
}

bool check(ll ind, ll l, ll r)
{
    pair<ll, ll> p = get_sum(ind, l, r);
    return p.first <= p.second;
}

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
        ll l = k, r = k + n - 1;
        ll ind = l;
        while (l <= r)
        {
            ll mid = (l + r) / 2;
            if (check(mid, k, k + n - 1))
            {
                ind = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        l = k;
        r = k + n - 1;
        pair<ll, ll> p1 = get_sum(ind, l, r);
        pair<ll, ll> p2 = get_sum(ind + 1, l, r);
        cout << min(p1.second - p1.first, p2.first - p2.second) << endl;
        t--;
    }

    return 0;
}