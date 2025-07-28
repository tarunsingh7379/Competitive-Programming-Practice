#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

void func(vector<ll> &a)
{
    map<ll, ll> mp;
    ll ma = 0;
    for (auto &num : a)
    {
        mp[num]++;
        if (mp[num] > 1)
        {
            ma = max(ma, num);
        }
        num = ma;
    }
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
        for (auto num : a)
        {
            ans += num;
        }
        func(a);
        for (auto num : a)
        {
            ans += num;
        }
        func(a);
        for (ll i = 0; i < n; i++)
        {
            ans += (n - i) * a[i];
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}