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
        ll ma = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
            ma = max(ma, a[i]);
        }

        ll cnt = 0;
        for (ll i = 0; i <= n; i++)
        {
            if (mp[i] == 1)
            {
                cnt++;
            }
            if (mp[i] == 0)
            {
                cout << i << endl;
                break;
            }
            if (cnt == 2)
            {
                cout << i << endl;
                break;
            }
        }

        t--;
    }

    return 0;
}