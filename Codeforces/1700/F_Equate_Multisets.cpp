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
        ll a[n], b[n];
        map<ll, ll> mp;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            while (a[i] % 2 == 0)
            {
                a[i] /= 2;
            }
            mp[a[i]]++;
        }
        for (ll i = 0; i < n; i++)
        {
            cin >> b[i];
            while (b[i] % 2 == 0)
            {
                b[i] /= 2;
            }
        }
        ll flag = 1;
        for (ll i = 0; i < n; i++)
        {
            while (1)
            {
                if (mp[b[i]])
                {
                    mp[b[i]]--;
                    break;
                }
                b[i] /= 2;
                if (b[i] == 0)
                {
                    flag = 0;
                    break;
                }
            }
            if (flag == 0)
            {
                break;
            }
        }
        if (flag == 1)
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