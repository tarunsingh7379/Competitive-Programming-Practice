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
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            if (i % 2)
            {
                a[i] = -a[i];
            }
        }
        map<ll, ll> mp;
        ll sum = 0, ans = 0;
        for (ll i = 0; i < n; i++)
        {
            sum += a[i];
            if (sum == 0)
            {
                ans++;
            }
            ans = ans + mp[sum];
            mp[sum]++;
        }
        if (ans)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }

        t--;
    }

    return 0;
}