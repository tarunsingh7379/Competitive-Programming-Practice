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
        string s;
        cin >> s;
        ll low = 0, upp = 0, dig = 0, spe = 0;
        ll n = s.size();
        ll flag = 1;
        if (n < 10)
        {
            flag = 0;
        }
        else
        {
            for (ll i = 0; i < n; i++)
            {
                if (s[i] >= 'a' && s[i] <= 'z')
                {
                    low++;
                    break;
                }
            }
            if (low > 0)
            {
                for (ll i = 1; i < (n - 1); i++)
                {
                    if (s[i] >= 'A' && s[i] <= 'Z')
                    {
                        upp++;
                    }
                    else if (s[i] >= '0' && s[i] <= '9')
                    {
                        dig++;
                    }
                    else
                    {
                        if (s[i] == '@' || s[i] == '#' || s[i] == '%' || s[i] == '&' || s[i] == '?')
                        {
                            spe++;
                        }
                    }
                }
                if (upp > 0 && dig > 0 && spe > 0)
                {
                }
                else
                {
                    flag = 0;
                }
            }
            else
            {
                flag = 0;
            }
        }
        cout << (flag ? "YES" : "NO") << endl;
        t--;
    }

    return 0;
}