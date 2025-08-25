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
    vector<ll> ans(n, 0), res(n, 0);
    ll total = 0, cur = 0;
    for (ll i = 0; i < n; i++)
    {
        bool ok = true;
        cur = a[i];
        ans[i] = a[i];
        for (ll j = i - 1; j >= 0; j--)
        {
            if (a[j] < ans[j + 1])
            {
                cur += a[j];
                ans[j] = a[j];
            }
            else
            {
                ll x = ans[j + 1];
                if (x <= 0)
                {
                    ok = false;
                    break;
                }
                cur += x;
                ans[j] = x;
            }
        }
        if (ok)
        {
            for (ll j = i + 1; j < n; j++)
            {
                if (a[j] < ans[j - 1])
                {
                    cur += a[j];
                    ans[j] = a[j];
                }
                else
                {
                    ll x = ans[j - 1];
                    if (x <= 0)
                    {
                        ok = false;
                        break;
                    }
                    cur += x;
                    ans[j] = x;
                }
            }
            if (ok)
            {
                if (total < cur)
                {
                    total = cur;
                    res = ans;
                }
            }
        }
    }
    for (auto num : res)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}