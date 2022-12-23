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
        map<ll, ll> mp_x;
        map<ll, ll> mp_y;
        for (ll i = 0; i < 4 * n - 1; i++)
        {
            ll x, y;
            cin >> x >> y;
            mp_x[x]++;
            mp_y[y]++;
        }
        ll x, y;
        for (auto num : mp_x)
        {
            if (num.second & 1)
            {
                x = num.first;
                break;
            }
        }
        for (auto num : mp_y)
        {
            if (num.second & 1)
            {
                y = num.first;
                break;
            }
        }
        cout << x << " " << y << endl;
        t--;
    }

    return 0;
}