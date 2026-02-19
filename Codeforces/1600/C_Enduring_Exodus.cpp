#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<ll> pos;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            pos.push_back(i);
        }
    }
    ll ans = n;
    for (ll i = 0; i <= pos.size() - (k + 1); i++)
    {
        ll left = pos[i];
        ll right = pos[i + k];
        ll target = (left + right) / 2;

        auto it = lower_bound(pos.begin() + i, pos.begin() + i + k + 1, target);

        if (it != pos.begin() + i + k + 1)
            ans = min(ans, max(*it - left, right - *it));

        if (it != pos.begin() + i)
        {
            --it;
            ans = min(ans, max(*it - left, right - *it));
        }
    }
    cout << ans << endl;

    return 0;
}