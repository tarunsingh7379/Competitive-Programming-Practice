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

    vector<ll> suffix(n);
    suffix[n - 1] = ~a[n - 1];
    for (ll i = n - 2; i >= 0; i--)
    {
        suffix[i] = suffix[i + 1] & (~a[i]);
    }
    ll ans = 0, ma = 0;
    ll pre = 0;
    if (n == 1)
    {
        cout << a[0] << endl;
    }
    else
    {
        for (ll i = 0; i < n; i++)
        {
            if (i == 0)
            {
                ll x = a[i] & suffix[i + 1];
                if (x > ma)
                {
                    ma = x;
                    ans = i;
                }
                pre = ~a[i];
            }
            else if (i == n - 1)
            {
                ll x = pre & a[i];
                if (x > ma)
                {
                    ma = x;
                    ans = i;
                }
            }
            else
            {
                ll x = pre & a[i] & suffix[i + 1];
                if (x > ma)
                {
                    ma = x;
                    ans = i;
                }
                pre = pre & ~a[i];
            }
        }
        cout << a[ans] << " ";
        for (ll i = 0; i < n; i++)
        {
            if (i == ans)
            {
                continue;
            }
            cout << a[i] << " ";
        }
        cout << endl;
    }

    return 0;
}