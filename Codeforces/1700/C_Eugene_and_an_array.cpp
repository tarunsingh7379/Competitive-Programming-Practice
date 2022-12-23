#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    map<ll, ll> mp;
    ll l = 0, ans = 0, sum = 0;
    for (ll r = 0; r < n; r++)
    {
        sum += a[r];
        while (l < r && mp.find(sum) != mp.end())
        {
            mp.erase(sum);
            sum -= a[l];
            l++;
        }
        ll len = r - l + 1;
        ans = ans + len * (len + 1) / 2;
        mp[sum] = i;
    }
    cout << ans << endl;

    return 0;
}