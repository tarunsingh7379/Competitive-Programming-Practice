#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int check(string &s, string &t)
{
    int n = s.size();
    int m = t.size();
    int cnt = 0;
    for (int i = 0; i <= n - m; i++)
    {
        string x = s.substr(i, m);
        if (x == t)
        {
            cnt++;
        }
    }
    return cnt;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while (T)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        string t = "abacaba";
        int m = t.size();
        int cnt = check(s, t);
        if (cnt > 1)
        {
            cout << "No" << endl;
        }
        else if (cnt == 1)
        {
            for (int i = 0; i < n; i++)
            {
                if (s[i] == '?')
                {
                    s[i] = 'z';
                }
            }
            cout << "Yes" << endl;
            cout << s << endl;
        }
        else
        {
            int flag = 1;
            for (int i = 0; i <= n - m; i++)
            {
                flag = 1;
                string temp = s;
                for (int j = i; j < i + m; j++)
                {
                    if (s[j] != t[j - i])
                    {
                        if (s[j] == '?')
                        {
                            s[j] = t[j - i];
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
                    if (check(s, t) == 1)
                    {
                        break;
                    }
                }
                s = temp;
                flag = 0;
            }
            if (flag == 1)
            {
                for (int i = 0; i < n; i++)
                {
                    if (s[i] == '?')
                    {
                        s[i] = 'z';
                    }
                }
                cout << "Yes" << endl;
                cout << s << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
        T--;
    }

    return 0;
}