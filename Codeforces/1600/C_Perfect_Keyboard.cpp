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
        string ans;
        vector<int> used(26, 0);
        ans.push_back(s[0]);
        int n = s.size();
        int j = 0;
        used[s[0] - 'a'] = 1;
        int flag = 1;
        for (int i = 1; i < n; i++)
        {
            if (used[s[i] - 'a'] == 1)
            {
                if (ans[j] == s[i])
                {
                }
                else if (j - 1 >= 0 && ans[j - 1] == s[i])
                {
                    j--;
                }
                else if (j + 1 < ans.size() && ans[j + 1] == s[i])
                {
                    j++;
                }
                else
                {
                    flag = 0;
                    break;
                }
            }
            else
            {
                if (j == ans.size() - 1)
                {
                    ans.push_back(s[i]);
                    j++;
                }
                else if (j == 0)
                {
                    ans = s[i] + ans;
                }
                else
                {
                    flag = 0;
                    break;
                }

                used[s[i] - 'a'] = 1;
            }
        }
        if (flag == 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            for (int i = 0; i < 26; i++)
            {
                if (used[i] == 0)
                {
                    ans.push_back(i + 'a');
                }
            }
            cout << ans << endl;
        }
        t--;
    }

    return 0;
}