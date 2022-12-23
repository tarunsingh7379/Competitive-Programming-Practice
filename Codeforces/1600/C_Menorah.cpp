#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

ll check(string &a, string &b)
{
    ll cnt10 = 0, cnt01 = 0;
    for (ll i = 0; i < a.size(); i++)
    {
        if (a[i] == '1' && b[i] == '0')
        {
            cnt10++;
        }
        if (a[i] == '0' && b[i] == '1')
        {
            cnt01++;
        }
    }
    if (cnt10 == cnt01)
    {
        return 2 * cnt10;
    }
    else
    {
        return -1;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string a, b;
        cin >> a >> b;
        ll x = check(a, b);
        ll ans = INT_MAX;
        if (x != -1)
        {
            ans = min(ans, x);
        }

        string s = a;
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == '1' && b[i] == '1')
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            int cnt = 0;
            for (ll i = 0; i < n; i++)
            {
                if (a[i] == '0')
                {
                    s[i] = '1';
                }
                else
                {
                    s[i] = '0';
                }
                if (cnt == 0 && a[i] == '1' && b[i] == '1')
                {
                    cnt++;
                    s[i] = '1';
                }
            }
            x = check(s, b);
            if (x != -1)
            {
                ans = min(ans, x + 1);
            }
        }
        flag = 0;
        s = a;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == '1' && b[i] == '0')
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            int cnt = 0;
            for (ll i = 0; i < n; i++)
            {
                if (a[i] == '0')
                {
                    s[i] = '1';
                }
                else
                {
                    s[i] = '0';
                }
                if (cnt == 0 && a[i] == '1' && b[i] == '0')
                {
                    cnt++;
                    s[i] = '1';
                }
            }
            x = check(s, b);
            if (x != -1)
            {
                ans = min(ans, x + 1);
            }
        }
        if (ans == INT_MAX)
        {
            ans = -1;
        }
        cout << ans << endl;
    }

    return 0;
}