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
        }
        ll flag = 1;
        ll l = 0, r = n - 1;

        while (l <= r)
        {
            if (a[l] != a[r])
            {
                flag = 0;
                break;
            }
            l++;
            r--;
        }
        vector<ll> v;
        v.push_back(a[0]);
        for (ll i = 1; i < n; i++)
        {
            if (v.back() != a[i])
            {
                v.push_back(a[i]);
            }
        }
        vector<ll> x;
        for (ll i = 1; i <= 7; i++)
        {
            x.push_back(i);
        }
        for (ll i = 6; i >= 1; i--)
        {
            x.push_back(i);
        }
        if (v.size() == 13)
        {
            for (ll i = 0; i < 13; i++)
            {
                if (x[i] != v[i])
                {
                    flag = 0;
                    break;
                }
            }
        }
        else
        {
            flag = 0;
        }
        cout << (flag ? "yes" : "no") << endl;

        t--;
    }

    return 0;
}