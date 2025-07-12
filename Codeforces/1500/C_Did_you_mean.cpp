#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

bool is_vowel(char c)
{
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    int n = s.size();
    vector<string> ans;
    string temp = "";
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (is_vowel(s[i]))
        {
            temp.push_back(s[i]);
            cnt = 0;
        }
        else
        {
            temp.push_back(s[i]);
            if (cnt > 0 && s[i] != s[i - 1])
            {
                if (cnt != 1)
                {
                    temp.pop_back();
                    ans.push_back(temp);
                    temp = "";
                    temp.push_back(s[i]);
                    cnt = 1;
                }
                else if (i + 1 < n && is_vowel(s[i + 1]))
                {
                }
                else
                {
                    ans.push_back(temp);
                    temp = "";
                    cnt = 0;
                }
                continue;
            }
            cnt++;
        }
    }
    if (temp.size() > 0)
    {
        ans.push_back(temp);
    }
    for (auto str : ans)
        cout << str << " ";

    return 0;
}