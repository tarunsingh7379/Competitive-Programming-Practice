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
    vector<ll> ans;
    ans.push_back(a[0]);
    ll cnt = 0;
    for (ll i = 1; i < n; i++)
    {
        ll g = __gcd(ans.back(), a[i]);
        if (g != 1)
        {
            ans.push_back(1);
            cnt++;
        }
        ans.push_back(a[i]);
    }
    cout << cnt << endl;
    for (auto num : ans)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}