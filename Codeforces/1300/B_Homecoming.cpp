#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

ll check(ll ind, ll a, ll b, ll money, string &s)
{
    char last = s[ind];
    for (ll i = ind + 1; i < s.size() - 1; i++)
    {
        if (s[i] != last)
        {
            if (last == 'A')
            {
                money -= a;
            }
            else
            {
                money -= b;
            }
            last = s[i];
        }
    }
    if (last == 'A')
    {
        money -= a;
    }
    else
    {
        money -= b;
    }
    return money >= 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t)
    {
        ll a, b, k;
        cin >> a >> b >> k;
        string s;
        cin >> s;
        ll n = s.size();
        ll l = 0, r = n - 1;
        ll ans = n - 1;
        while (l <= r)
        {
            ll mid = (l + r) / 2;
            if (check(mid, a, b, k, s))
            {
                ans = mid;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        cout << ans + 1 << endl;
        t--;
    }

    return 0;
}