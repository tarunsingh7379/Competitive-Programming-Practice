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
    int n = s.size();
    string temp;
    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] == 'e')
        {
            break;
        }
        temp.push_back(s[i]);
    }
    reverse(temp.begin(), temp.end());
    int dot_pos = stoi(temp);
    string ans;
    ans.push_back(s[0]);
    int cnt = 0;
    for (int i = 2; i < n; i++)
    {
        if (s[i] == 'e')
        {
            break;
        }
        if (cnt == dot_pos)
        {
            ans.push_back('.');
        }
        ans.push_back(s[i]);
        cnt++;
    }
    while (cnt < dot_pos)
    {
        ans.push_back('0');
        cnt++;
    }
    while (ans.size() - 1 > 0 && ans[0] == '0' && ans[1] != '.')
    {
        ans.erase(ans.begin());
    }
    for (auto c : ans)
    {
        if (c == '.')
        {
            while (ans.size() > 0 && ans.back() == '0')
            {
                ans.pop_back();
            }
            if (ans.back() == '.')
            {
                ans.pop_back();
            }
            break;
        }
    }

    if (ans.size() == 0)
    {
        ans = "0";
    }
    cout << ans << endl;

    return 0;
}