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
        map<ll, ll> mp1, mp2;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            mp1[x]++;
        }
        bool ok = true;
        for (ll i = 1; i <= 4 * n; i++)
        {
            if (mp1.find(i) == mp1.end())
                continue;
            mp2[i]++;
            mp1[i]--;
            if (mp1[i] == 0)
            {
                ok = false;
                break;
            }
            mp1[i]--;
            if (mp1[i] > 0)
            {
                mp1[i + 1] += mp1[i];
            }
            mp1[i] = 1;
        }
        if (mp1 != mp2)
            ok = false;
        if (ok)
            cout << "Yes\n";
        else
            cout << "No\n";
        t--;
    }

    return 0;
}