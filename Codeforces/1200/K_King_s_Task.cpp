#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

bool check(vector<ll> &a, vector<ll> &b)
{
    for (ll i = 0; i < a.size(); i++)
    {
        if (a[i] != b[i])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;

    vector<ll> a(2 * n);
    for (ll i = 0; i < 2 * n; i++)
    {
        cin >> a[i];
    }
    vector<ll> req(2 * n);
    for (ll i = 0; i < 2 * n; i++)
    {
        req[i] = i + 1;
    }
    ll cnt = 0;
    ll ans = 0;
    if (check(a, req))
    {
        cout << ans << endl;
    }
    else
    {
        ll flag = 1;
        vector<ll> copy = a;
        while (1)
        {
            cnt++;
            if (flag == 1)
            {
                for (ll i = 0; i < 2 * n; i += 2)
                {
                    swap(a[i], a[i + 1]);
                }
                flag = 0;
            }
            else
            {
                for (ll i = 0; i < n; i++)
                {
                    swap(a[i], a[i + n]);
                }
                flag = 1;
            }
            if (check(a, req))
            {
                break;
            }
            if (cnt == 1001)
            {
                break;
            }
        }
        ll cnt1 = 0;
        flag = 0;
        while (1)
        {
            cnt1++;
            if (flag == 1)
            {
                for (ll i = 0; i < 2 * n; i += 2)
                {
                    swap(copy[i], copy[i + 1]);
                }
                flag = 0;
            }
            else
            {
                for (ll i = 0; i < n; i++)
                {
                    swap(copy[i], copy[i + n]);
                }
                flag = 1;
            }
            if (check(copy, req))
            {
                break;
            }
            if (cnt1 == 1001)
            {
                break;
            }
        }
        ll ans = min(cnt, cnt1);
        if (ans == 1001)
        {
            ans = -1;
        }
        cout << ans << endl;
    }

    return 0;
}