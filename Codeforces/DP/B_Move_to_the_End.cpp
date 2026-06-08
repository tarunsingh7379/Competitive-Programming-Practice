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
        mp[0] = 1;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }
        ll sum = 0, ans = 0;
        for (ll i = n - 1; i >= 0; i--)
        {
            mp[a[i]]--;
            if (mp[a[i]] == 0)
            {
                mp.erase(a[i]);
            }
            ans = sum + max(a[i], mp.rbegin()->first);
            cout << ans << " ";
            sum += a[i];
        }
        cout << endl;
        t--;
    }

    return 0;
}