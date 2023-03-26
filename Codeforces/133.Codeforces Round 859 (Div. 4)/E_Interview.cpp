#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

ll print_stdout(ll l, ll r)
{
    ll k = r - l + 1;
    cout << "? " << k << " ";
    for (ll i = l; i <= r; i++)
    {
        cout << i + 1 << " ";
    }
    cout << endl;
    ll x;
    cin >> x;
    return x;
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
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<ll> prefix(n);
        prefix[0] = a[0];
        for (ll i = 1; i < n; i++)
        {
            prefix[i] = prefix[i - 1] + a[i];
        }

        ll l = 0, r = n - 1;
        while (l < r)
        {
            ll mid = (l + r) / 2;
            ll got_sum = print_stdout(mid, r);
            ll sum = prefix[r];
            if (mid - 1 >= 0)
            {
                sum -= prefix[mid - 1];
            }
            if (sum == got_sum)
            {
                r = mid - 1;
            }
            else
            {
                if (l == mid)
                {
                    break;
                }
                l = mid;
            }
        }
        if (l == r)
        {
            cout << "! " << l + 1 << endl;
        }
        else
        {
            ll got_sum = print_stdout(l, l);
            ll sum = a[l];
            if (sum != got_sum)
            {
                cout << "! " << l + 1 << endl;
            }
            else
            {
                cout << "! " << l + 2 << endl;
            }
        }
        t--;
    }

    return 0;
}