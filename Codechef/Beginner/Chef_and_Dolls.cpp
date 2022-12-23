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
        map<ll, ll> m;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            m[x]++;
        }
        for (auto num : m)
        {
            if (num.second % 2 == 1)
            {
                cout << num.first << endl;
                break;
            }
        }
        t--;
    }

    return 0;
}