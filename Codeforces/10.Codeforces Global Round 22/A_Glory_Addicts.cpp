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
        ll b[n];
        ll sum = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> b[i];
            sum += b[i];
        }
        vector<ll> v1, v2;

        for (ll i = 0; i < n; i++)
        {
            if (a[i] == 0)
            {
                v1.push_back(b[i]);
            }
            else
            {
                v2.push_back(b[i]);
            }
        }
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());

        ll ans = 0;
        if (v1.size() == v2.size())
        {
            ans -= min(v1[0], v2[0]);
        }
        while (v1.size() > 0 && v2.size() > 0)
        {
            ans += (v1.back() + v2.back()) * 2;
            v1.pop_back();
            v2.pop_back();
        }
        for (auto num : v1)
        {
            ans += num;
        }
        for (auto num : v2)
        {
            ans += num;
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}