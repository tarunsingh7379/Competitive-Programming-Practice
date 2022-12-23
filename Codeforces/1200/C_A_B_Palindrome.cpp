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
        ll a, b;
        cin >> a >> b;
        string s;
        cin >> s;
        ll n = s.size();
        ll l = 0, r = n - 1;
        ll flag = 1;
        while (l < r)
        {
            if (s[l] != s[r])
            {
                if (s[l] != '?' && s[r] != '?')
                {
                    flag = 0;
                    break;
                }
                if (s[l] == '?')
                {
                    if (s[r] == '0')
                    {
                        s[l] = '0';
                    }
                    else
                    {
                        s[l] = '1';
                    }
                }
                else
                {
                    if (s[l] == '0')
                    {
                        s[r] = '0';
                    }
                    else
                    {
                        s[r] = '1';
                    }
                }
            }
            l++;
            r--;
        }
        if (flag == 0)
        {
            cout << -1 << endl;
        }
        else
        {
            ll count_0 = count(s.begin(), s.end(), '0');
            ll count_1 = count(s.begin(), s.end(), '1');
            a = a - count_0;
            b = b - count_1;
            if (a == 0 && b == 0)
            {
                cout << s << endl;
            }
            else if (a < 0 || b < 0)
            {
                cout << -1 << endl;
            }
            else
            {
                ll count_q = n - (count_0 + count_1);
                if (count_q % 2 == 0)
                {
                    if (a % 2 == 0 && b % 2 == 0)
                    {
                        ll l = 0, r = n - 1;
                        while (l < r)
                        {
                            if (s[l] == s[r] && s[l] == '?')
                            {
                                if (a > 0)
                                {
                                    s[l] = '0';
                                    s[r] = '0';
                                    a = a - 2;
                                }
                                else
                                {
                                    s[l] = '1';
                                    s[r] = '1';
                                    b = b - 2;
                                }
                            }
                            l++;
                            r--;
                        }
                        cout << s << endl;
                    }
                    else
                    {
                        cout << -1 << endl;
                    }
                }
                else
                {
                    bool ok = false;
                    if (a % 2 != 0 && b % 2 == 0)
                    {
                        s[n / 2] = '0';
                        ok = true;
                        a--;
                    }
                    else if (a % 2 == 0 && b % 2 != 0)
                    {
                        s[n / 2] = '1';
                        ok = true;
                        b--;
                    }
                    if (ok)
                    {
                        ll l = 0, r = n - 1;
                        while (l < r)
                        {
                            if (s[l] == s[r] && s[l] == '?')
                            {
                                if (a > 0)
                                {
                                    s[l] = '0';
                                    s[r] = '0';
                                    a = a - 2;
                                }
                                else
                                {
                                    s[l] = '1';
                                    s[r] = '1';
                                    b = b - 2;
                                }
                            }
                            l++;
                            r--;
                        }
                        cout << s << endl;
                    }
                    else
                    {
                        cout << -1 << endl;
                    }
                }
            }
        }
        t--;
    }

    return 0;
}