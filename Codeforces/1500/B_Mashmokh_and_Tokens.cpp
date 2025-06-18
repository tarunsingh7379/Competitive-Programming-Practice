#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, a, b;
    cin >> n >> a >> b;
    ll token[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> token[i];
    }
    for (ll i = 0; i < n; i++)
    {
        ll l = 0, r = token[i];
        ll max_money = (r * a) / b;
        ll ans = 0;
        while (l <= r)
        {
            ll mid = (l + r) / 2;
            ll cur = (mid * a) / b;
            if (cur == max_money)
            {
                ans = mid;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        cout << token[i] - ans << " ";
    }

    return 0;
}