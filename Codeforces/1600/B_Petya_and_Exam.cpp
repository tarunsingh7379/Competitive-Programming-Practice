#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> freq(26, 0);
    string good;
    cin >> good;
    for (auto c : good)
    {
        freq[c - 'a']++;
    }
    string s;
    cin >> s;
    int n = s.size();
    int pos = -1;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '*')
        {
            pos = i;
            break;
        }
    }
    string s1 = "", s2 = "";
    if (pos != -1)
    {
        s1 = s.substr(0, pos);
        s2 = s.substr(pos + 1);
    }
    int q;
    cin >> q;
    while (q--)
    {
        string t;
        cin >> t;
        int m = t.size();
        if (pos == -1)
        {
            if (m != n)
            {
                cout << "NO" << endl;
            }
            else
            {
                bool ok = true;
                for (int i = 0; i < n; i++)
                {
                    if (s[i] == '?' && freq[t[i] - 'a'] == 0)
                    {
                        ok = false;
                        break;
                    }
                    if (s[i] != '?' && s[i] != t[i])
                    {
                        ok = false;
                        break;
                    }
                }
                cout << (ok ? "YES" : "NO") << endl;
            }
        }
        else
        {
            if (m < n - 1)
            {
                cout << "NO" << endl;
            }
            else
            {
                int l = 0, r = m - 1;
                bool ok = true;
                for (int i = 0; i < s1.size(); i++)
                {
                    if (s1[i] == '?' && freq[t[l] - 'a'] == 0)
                    {
                        ok = false;
                        break;
                    }
                    if (s1[i] != '?' && s1[i] != t[l])
                    {
                        ok = false;
                        break;
                    }
                    l++;
                }
                for (int i = s2.size() - 1; i >= 0; i--)
                {
                    if (s2[i] == '?' && freq[t[r] - 'a'] == 0)
                    {
                        ok = false;
                        break;
                    }
                    if (s2[i] != '?' && s2[i] != t[r])
                    {
                        ok = false;
                        break;
                    }
                    r--;
                }
                for (int i = l; i <= r; i++)
                {
                    if (freq[t[i] - 'a'] != 0)
                    {
                        ok = false;
                        break;
                    }
                }
                cout << (ok ? "YES" : "NO") << endl;
            }
        }
    }

    return 0;
}