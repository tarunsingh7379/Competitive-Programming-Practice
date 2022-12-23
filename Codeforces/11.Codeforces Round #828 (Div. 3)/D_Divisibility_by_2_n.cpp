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
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll cnt = 0;
        vector<ll> v;
        for (ll i = 0; i < n; i++)
        {
            while (a[i] % 2 == 0)
            {
                cnt++;
                a[i] /= 2;
            }
            ll j = i + 1;
            ll cnt1 = 0;
            while (j % 2 == 0)
            {
                cnt1++;
                j /= 2;
            }
            v.push_back(cnt1);
        }
        sort(v.begin(), v.end());
        reverse(v.begin(), v.end());
        if (cnt >= n)
        {
            cout << 0 << endl;
        }
        else
        {
            ll ans = 0, flag = 0;
            for (ll i = 0; i < v.size(); i++)
            {
                cnt += v[i];
                ans++;
                if (cnt >= n)
                {
                    flag = 1;
                    break;
                }
            }
            cout << (flag ? ans : -1) << endl;
        }
        t--;
    }

    return 0;
}