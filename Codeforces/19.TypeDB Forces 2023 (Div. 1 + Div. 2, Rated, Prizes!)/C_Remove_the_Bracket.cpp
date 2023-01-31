#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

ll func(ll ind, ll type, ll k, vector<ll> &a)
{
    if (ind == (a.size() - 1))
    {
        ll curr = a[ind - 1];
        ll val = 0;
        if (curr <= k)
        {
            if (type == 0)
            {
                val = 0;
            }
            else
            {
                val = curr;
            }
        }
        else
        {
            if (type == 0)
            {
                val = curr - k;
            }
            else
            {
                val = k;
            }
        }
        return val * a[ind];
    }
    ll ans = 1e18;
    ll curr = a[ind];
    ll val = 0;
    if (curr <= k)
    {
        if (type == 0)
        {
            val = 0;
        }
        else
        {
            val = curr;
        }
    }
    else
    {
        if (type == 0)
        {
            val = curr - k;
        }
        else
        {
            val = k;
        }
    }
    if (ind == 0)
    {
        val = a[ind];
    }
    ll next = a[ind + 1];
    if (next <= k)
    {
        ll ch1 = val * next + func(ind + 1, 0, k, a);
        ll ch2 = func(ind + 1, 1, k, a);
        ans = min(ch1, ch2);
    }
    else
    {
        ll ch1 = val * k + func(ind + 1, 0, k, a);
        ll ch2 = val * (next - k) + func(ind + 1, 1, k, a);
        ans = min(ch1, ch2);
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cout << func(0, 0, k, a) << endl;
        t--;
    }

    return 0;
}