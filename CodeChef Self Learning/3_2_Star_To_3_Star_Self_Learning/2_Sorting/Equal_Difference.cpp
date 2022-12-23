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
        ll n;
        cin >> n;
        ll a[n];
        map<ll, ll> mp;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }
        ll highest = 0;
        for (auto num : mp)
        {
            highest = max(highest, num.second);
        }
        ll ans = min(n - 2, n - highest);
        if (n == 1 || n == 2)
        {
            ans = 0;
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}