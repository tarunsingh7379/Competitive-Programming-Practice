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
        int n;
        cin >> n;
        string s;
        cin >> s;
        int flag = 0;
        for (char c = 'a'; c <= 'z'; c++)
        {
            if (c <= s[0])
            {
                for (int i = n - 1; i > 0; i--)
                {
                    if (s[i] == c)
                    {
                        cout << c;
                        for (int j = 0; j < n; j++)
                        {
                            if (j == i)
                            {
                                continue;
                            }
                            cout << s[j];
                        }
                        cout << endl;
                        flag = 1;
                        break;
                    }
                }
            }
            if (flag == 1)
            {
                break;
            }
        }
        if (flag == 0)
        {
            cout << s << endl;
        }
        t--;
    }

    return 0;
}