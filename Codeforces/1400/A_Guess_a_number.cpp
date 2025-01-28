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
    ll l = -2e9, r = 2e9;
    for (ll i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        ll x;
        cin >> x;
        char c;
        cin >> c;
        if (s == ">=")
        {
            if (c == 'Y')
            {
                l = max(l, x);
            }
            else
            {
                r = min(r, x - 1);
            }
        }
        else if (s == ">")
        {
            if (c == 'Y')
            {
                l = max(l, x + 1);
            }
            else
            {
                r = min(r, x);
            }
        }
        else if (s == "<=")
        {
            if (c == 'Y')
            {
                r = min(r, x);
            }
            else
            {
                l = max(l, x + 1);
            }
        }
        else
        {
            if (c == 'Y')
            {
                r = min(r, x - 1);
            }
            else
            {
                l = max(l, x);
            }
        }
    }
    if (l <= r)
    {
        cout << l << endl;
    }
    else
    {
        cout << "Impossible" << endl;
    }
    return 0;
}