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
        string s;
        cin >> s;
        map<pair<ll, ll>, ll> mp;
        ll a = 0, b = 0;
        for (auto num : s)
        {
            if (num == 'D')
            {
                a++;
            }
            else
            {
                b++;
            }
            ll g = __gcd(a, b);
            mp[{a / g, b / g}]++;
            cout << mp[{a / g, b / g}] << " ";
        }
        cout << endl;
        t--;
    }

    return 0;
}