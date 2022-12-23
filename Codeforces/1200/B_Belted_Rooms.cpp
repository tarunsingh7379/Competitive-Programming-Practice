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
        string s;
        cin >> s;
        ll ans = 0;
        ll flag = 1;
        for (ll i = 0; i < n; i++)
        {
            if (s[i] == '<')
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            ans = n;
        }
        else
        {
            flag = 1;
            for (ll i = n - 1; i >= 0; i--)
            {
                if (s[i] == '>')
                {
                    flag = 0;
                    break;
                }
            }
            if (flag == 1)
            {
                ans = n;
            }
            else
            {
                ans = 0;
                ll cnt = 0;
                for (ll i = 0; i < n; i++)
                {
                    if (s[i] == '-')
                    {
                        cnt++;
                    }
                    else
                    {
                        if (cnt > 0)
                        {
                            ans = ans + cnt + 1;
                        }

                        cnt = 0;
                    }
                }
                if (cnt > 0)
                {
                    ans = ans + cnt + 1;
                    if (s[0] == '-')
                    {
                        ans--;
                    }
                }
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}