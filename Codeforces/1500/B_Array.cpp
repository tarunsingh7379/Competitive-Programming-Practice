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
    ll l = 0, r = 0;
    map<ll, ll> mp;
    bool ok = false;
    for (r = 0; r < n; r++)
    {
        mp[a[r]]++;
        if (mp.size() == k)
        {
            while (l < r && mp.size() == k)
            {
                if (mp[a[l]] > 1)
                {
                    mp[a[l]]--;
                    l++;
                }
                else
                {
                    break;
                }
            }
            ok = true;
            break;
        }
    }
    if (ok)
    {
        cout << l + 1 << " " << r + 1 << endl;
    }
    else
    {
        cout << -1 << " " << -1 << endl;
    }
    return 0;
}