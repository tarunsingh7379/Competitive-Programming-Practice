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
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        vector<ll> temp = v;
        while (v.size() >= 3)
        {
            sort(v.begin(), v.begin() + 3);
            v.erase(v.begin() + 1);
        }
        ll pos1 = 0, pos2 = 0;
        for (ll i = 0; i < n; i++)
        {
            if (temp[i] == v[0])
            {
                pos1 = i;
            }
            if (temp[i] == v[1])
            {
                pos2 = i;
            }
        }
        if (pos1 < pos2)
        {
            cout << v[0] << " " << v[1] << endl;
        }
        else
        {
            cout << v[1] << " " << v[0] << endl;
        }

        t--;
    }

    return 0;
}