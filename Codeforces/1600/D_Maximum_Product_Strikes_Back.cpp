#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

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
        vector<ll> pos;
        pos.push_back(-1);
        for (ll i = 0; i < n; i++)
        {
            if (a[i] == 0)
            {
                pos.push_back(i);
            }
        }
        pos.push_back(n);
        ll ans = 0, l = n, r = 0;

        for (ll i = 0; i < pos.size() - 1; i++)
        {
            ll x = pos[i] + 1;
            ll y = pos[i + 1] - 1;
            if (x <= y)
            {
                ll cnt = 0, sign = 0;
                for (ll j = x; j <= y; j++)
                {
                    if (a[j] == -1)
                    {
                        sign++;
                    }
                    else if (a[j] == -2)
                    {
                        sign++;
                        cnt++;
                    }
                    else if (a[j] == 2)
                    {
                        cnt++;
                    }
                }
                if (sign % 2 != 0)
                {
                    ll first = -1, last = -1;
                    for (ll j = x; j <= y; j++)
                    {
                        if (a[j] < 0)
                        {
                            first = j;
                            break;
                        }
                    }
                    for (ll j = y; j >= x; j--)
                    {
                        if (a[j] < 0)
                        {
                            last = j;
                            break;
                        }
                    }
                    cnt = 0;
                    for (ll j = first + 1; j <= y; j++)
                    {
                        if (a[j] == 2 || a[j] == -2)
                        {
                            cnt++;
                        }
                    }
                    if (cnt > ans)
                    {
                        ans = cnt;
                        l = first + 1;
                        r = n - y - 1;
                    }
                    cnt = 0;
                    for (ll j = x; j < last; j++)
                    {
                        if (a[j] == 2 || a[j] == -2)
                        {
                            cnt++;
                        }
                    }
                    if (cnt > ans)
                    {
                        ans = cnt;
                        l = x;
                        r = n - last;
                    }
                }
                else
                {
                    if (cnt > ans)
                    {
                        ans = cnt;
                        l = x;
                        r = n - y - 1;
                    }
                }
            }
        }
        cout << l << " " << r << endl;
        t--;
    }

    return 0;
}