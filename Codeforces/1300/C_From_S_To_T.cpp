#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

bool func(string &s, string &t)
{
    int n = s.size(), m = t.size();
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        while (j < m && t[j] != s[i])
        {
            j++;
        }
        j++;
    }
    return (j > m);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while (tt)
    {
        string s, t, p;
        cin >> s >> t >> p;
        if (s.size() > t.size())
        {
            cout << "NO" << endl;
        }
        else
        {
            map<char, int> mp;
            for (auto c : s)
            {
                mp[c]++;
            }
            for (auto c : t)
            {
                mp[c]--;
            }
            map<char, int> have;
            for (auto c : p)
            {
                have[c]++;
            }
            int flag = 1;
            for (auto it : mp)
            {
                if (it.second > 0)
                {
                    flag = 0;
                    break;
                }
                else if (it.second < 0)
                {
                    if (have[it.first] < abs(it.second))
                    {
                        flag = 0;
                        break;
                    }
                }
            }
            if (func(s, t))
            {
                flag = 0;
            }
            cout << (flag ? "YES" : "NO") << endl;
        }
        tt--;
    }

    return 0;
}