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
        int small = 0, capital = 0, digit = 0;
        for (auto c : s)
        {
            if (c >= 'a' && c <= 'z')
            {
                small++;
            }
            else if (c >= 'A' && c <= 'Z')
            {
                capital++;
            }
            else
            {
                digit++;
            }
        }
        if (small > 0 && capital > 0 && digit > 0)
        {
            cout << s << endl;
        }
        else
        {
            if (small == 0)
            {
                if (capital > 1)
                {
                    for (auto &c : s)
                    {
                        if (c >= 'A' && c <= 'Z')
                        {
                            c = 'a';
                            break;
                        }
                    }
                    capital--;
                    small++;
                }
                else
                {
                    for (auto &c : s)
                    {
                        if (c >= '0' && c <= '9')
                        {
                            c = 'a';
                            break;
                        }
                    }
                    digit--;
                    small++;
                }
            }
            if (capital == 0)
            {
                if (small > 1)
                {
                    for (auto &c : s)
                    {
                        if (c >= 'a' && c <= 'z')
                        {
                            c = 'A';
                            break;
                        }
                    }
                    capital++;
                    small--;
                }
                else
                {
                    for (auto &c : s)
                    {
                        if (c >= '0' && c <= '9')
                        {
                            c = 'A';
                            break;
                        }
                    }
                    digit--;
                    capital++;
                }
            }
            if (digit == 0)
            {
                if (capital > 1)
                {
                    for (auto &c : s)
                    {
                        if (c >= 'A' && c <= 'Z')
                        {
                            c = '0';
                            break;
                        }
                    }
                    capital--;
                    digit++;
                }
                else
                {
                    for (auto &c : s)
                    {
                        if (c >= 'a' && c <= 'z')
                        {
                            c = '0';
                            break;
                        }
                    }
                    digit++;
                    small--;
                }
            }
            cout << s << endl;
        }
        t--;
    }

    return 0;
}