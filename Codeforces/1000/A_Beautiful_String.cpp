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
        int n = s.size();
        string x = "abc";
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '?')
            {
                for (auto c : x)
                {
                    if (i - 1 >= 0 && c != s[i - 1] && i + 1 < n && c != s[i + 1])
                    {
                        s[i] = c;
                        break;
                    }
                    else if (i - 1 >= 0 && c != s[i - 1] && i + 1 >= n)
                    {
                        s[i] = c;
                        break;
                    }
                    else if (i - 1 < 0 && i + 1 < n && c != s[i + 1])
                    {
                        s[i] = c;
                        break;
                    }
                }
            }
        }
        int flag = 1;
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == s[i + 1])
            {
                flag = 0;
                break;
            }
        }
        if (s[0] == '?')
        {
            s[0] = 'a';
        }
        cout << (flag ? s : "-1") << endl;
        t--;
    }

    return 0;
}