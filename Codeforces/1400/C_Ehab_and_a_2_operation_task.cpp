#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll tot_add = 0;
    vector<pair<ll, ll>> ans;
    for (ll i = n - 1; i >= 0; i--)
    {
        a[i] = a[i] + tot_add;
        ll req = n - (a[i] - i + n) % n;
        ans.push_back({i + 1, req});
        tot_add += req;
    }
    cout << ans.size() + 1 << endl;
    for (auto num : ans)
    {
        cout << 1 << " " << num.first << " " << num.second << endl;
    }
    cout << 2 << " " << n << " " << n << endl;
    return 0;
}