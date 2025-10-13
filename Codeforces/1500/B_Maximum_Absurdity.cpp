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
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll ind_a = n - 2 * k, ind_b = n - k;
    ll sum_a = 0, sum_b = 0;
    for (ll i = n - k; i < n; i++)
    {
        sum_b += a[i];
    }
    for (ll i = n - 2 * k; i < n - k; i++)
    {
        sum_a += a[i];
    }
    ll tot = sum_a + sum_b;
    ll sum = sum_b;
    pair<ll, ll> ans = {ind_a + 1, ind_b + 1};
    for (ll i = n - 2 * k - 1; i >= 0; i--)
    {
        sum_a += a[i];
        sum_a -= a[i + k];
        sum_b += a[i + k];
        sum_b -= a[i + 2 * k];
        if (sum_b >= sum)
        {
            sum = sum_b;
            ind_b = i + k;
        }
        if (sum_a + sum >= tot)
        {
            tot = sum_a + sum;
            ind_a = i;
            ans = {ind_a + 1, ind_b + 1};
        }
    }
    cout << ans.first << " " << ans.second << endl;

    return 0;
}