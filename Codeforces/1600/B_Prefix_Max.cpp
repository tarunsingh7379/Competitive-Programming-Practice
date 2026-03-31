#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

ll func(vector<ll> &a)
{
    ll sum = 0, ma = 0;
    for (ll i = 0; i < a.size(); i++)
    {
        ma = max(ma, a[i]);
        sum += ma;
    }
    return sum;
}

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
        ll ans = 0;
        ans = max(ans, func(a));
        for (ll i = 0; i < n; i++)
        {
            for (ll j = i + 1; j < n; j++)
            {
                swap(a[i], a[j]);
                ans = max(ans, func(a));
                swap(a[i], a[j]);
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}