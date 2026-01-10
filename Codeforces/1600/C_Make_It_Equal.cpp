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
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    vector<ll> freq(a[n - 1] + 10, 0);
    for (auto num : a)
    {
        freq[num]++;
    }
    ll ans = 0;
    ll l = a[0], r = a[n - 1] + 10;
    ll cnt = 0, sum = 0, x = a[n - 1];
    while (r >= l)
    {
        ll cost = sum - cnt * (r - 1);
        if (cost > k)
        {
            ans++;
            x = r;
            sum = cnt * r;
        }
        r--;
        cnt += freq[r];
        sum += freq[r] * r;
    }
    if (x != l)
        ans++;
    cout << ans << endl;

    return 0;
}