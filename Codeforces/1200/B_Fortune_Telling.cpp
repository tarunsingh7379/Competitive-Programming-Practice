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
    vector<ll> even, odd;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x & 1)
        {
            odd.push_back(x);
        }
        else
        {
            even.push_back(x);
        }
    }
    if (odd.size() == 0)
    {
        cout << 0 << endl;
    }
    else
    {
        sort(odd.begin(), odd.end());
        reverse(odd.begin(), odd.end());
        ll ans = 0;
        ans = odd[0];
        for (auto num : even)
        {
            ans += num;
        }
        for (ll i = 2; i < odd.size(); i += 2)
        {
            ans = ans + odd[i] + odd[i - 1];
        }
        cout << ans << endl;
    }

    return 0;
}