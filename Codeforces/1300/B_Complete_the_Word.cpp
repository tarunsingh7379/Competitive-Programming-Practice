#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    map<char, int> mp;
    int n = s.size();
    if (n < 26)
    {
        cout << -1 << endl;
        return 0;
    }
    int ques = 0;
    for (int i = 0; i < 26; i++)
    {
        if (s[i] == '?')
        {
            ques++;
            continue;
        }
        mp[s[i]]++;
    }
    int flag = 0;
    if ((mp.size() + ques) == 26)
    {
        flag = 1;
        for (int i = 0; i < 26; i++)
        {
            if (s[i] == '?')
            {
                for (int j = 0; j < 26; j++)
                {
                    if (mp[j + 'A'] == 0)
                    {
                        s[i] = j + 'A';
                        mp[j + 'A']++;
                        break;
                    }
                }
            }
        }
        for (int i = 26; i < n; i++)
        {
            if (s[i] == '?')
            {
                s[i] = 'A';
            }
        }
    }
    if (flag == 0)
        for (int i = 26; i < n; i++)
        {
            if (s[i - 26] != '?')
            {
                mp[s[i - 26]]--;
                if (mp[s[i - 26]] == 0)
                {
                    mp.erase(s[i - 26]);
                }
            }
            else
            {
                ques--;
            }
            if (s[i] != '?')
                mp[s[i]]++;
            else
                ques++;
            if ((mp.size() + ques) == 26)
            {
                flag = 1;
                for (int j = i - 25; j <= i; j++)
                {
                    if (s[j] == '?')
                    {
                        for (int k = 0; k < 26; k++)
                        {
                            if (mp[k + 'A'] == 0)
                            {
                                s[j] = k + 'A';
                                mp[k + 'A']++;
                                break;
                            }
                        }
                    }
                }
                for (int j = 0; j < n; j++)
                {
                    if (s[j] == '?')
                    {
                        s[j] = 'A';
                    }
                }
                break;
            }
        }
    if (!flag)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << s << endl;
    }

    return 0;
}