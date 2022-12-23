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
        int x;
        cin >> x;
        int n = s.size(), flag = 1;
        string ans = string(n, '#');
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                if (i - x >= 0)
                {
                    if (ans[i - x] == '1')
                    {
                        flag = 0;
                        break;
                    }
                    ans[i - x] = '0';
                }
                if (i + x < n)
                {
                    if (ans[i + x] == '1')
                    {
                        flag = 0;
                        break;
                    }
                    ans[i + x] = '0';
                }
            }
            else
            {
                if (i - x >= 0)
                {
                    if (ans[i - x] == '0')
                    {
                        if (i + x < n)
                        {
                            if (ans[i + x] == '0')
                            {
                                flag = 0;
                                break;
                            }
                            ans[i + x] = '1';
                        }
                        else
                        {
                            flag = 0;
                            break;
                        }
                    }
                    else
                    {
                        ans[i - x] = '1';
                    }
                }
                else if (i + x < n)
                {
                    if (ans[i + x] == '0')
                    {
                        flag = 0;
                        break;
                    }
                    ans[i + x] = '1';
                }
                else
                {
                    flag = 0;
                    break;
                }
            }
        }
        if (flag == 1)
        {
            for (int i = 0; i < n; i++)
            {
                if (ans[i] == '#')
                {
                    cout << 1;
                }
                else
                {
                    cout << ans[i];
                }
            }
            cout << endl;
        }
        else
        {
            cout << -1 << endl;
        }
        t--;
    }

    return 0;
}