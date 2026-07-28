#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

bool check(ll mid, ll n)
{
    ll cur = 0, prev = 9;
    ll num_of_digits = to_string(mid).size();
    for (ll i = 1; i < num_of_digits; i++)
    {
        cur += i * prev;
        prev *= 10;
    }
    ll x = 0;
    if (num_of_digits > 1)
    {
        string s = string('9', num_of_digits - 1);
        x = stoll(s);
    }
    ll extra = mid - x;
    cur += (extra * num_of_digits);
    cout << cur << " " << mid << endl;
    return (cur <= n);
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
        ll l = 1, r = n;
        ll ans = 0;
        while (l <= r)
        {
            ll mid = (l + r) / 2;
            if (check(mid, n))
            {
                ans = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}