#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, r, k;
    cin >> n >> r >> k;

    vector<pair<ll, ll>> v;
    ll sum = 0, req_sum = k * n;
    for (ll i = 0; i < n; i++)
    {
        ll x, y;
        cin >> x >> y;
        v.push_back({y, x});
        sum += x;
    }

    sort(v.begin(), v.end());
    ll ans = 0, ind = 0;
    while (sum < req_sum)
    {
        ll rem = r - v[ind].second;
        if (sum + rem <= req_sum)
        {
            ans += v[ind].first * rem;
            sum += rem;
        }
        else
        {
            rem = req_sum - sum;
            ans += v[ind].first * rem;
            sum += rem;
        }
        ind++;
    }
    cout << ans << endl;

    return 0;
}