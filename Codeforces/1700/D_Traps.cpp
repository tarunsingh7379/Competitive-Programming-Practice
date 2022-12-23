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
        vector<ll> v;
        ll sum = 0;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            sum += x;
            v.push_back(x - (n - 1 - i));
        }
        sort(v.rbegin(), v.rend());
        ll sum1 = 0;
        for (ll i = 0; i < k; i++)
        {
            sum1 += v[i];
        }
        ll ans = sum - sum1 - k * (k - 1) / 2;
        cout << ans << endl;
        t--;
    }

    return 0;
}