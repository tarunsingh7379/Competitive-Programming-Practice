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
    string ans = "";
    int n = s.size();
    ans.push_back(s[0]);
    int cnt = 1;
    int found = 0;
    for (int i = 1; i < n; i++)
    {
        if (s[i] == s[i - 1])
        {
            ans.push_back(s[i]);
            cnt++;
        }
        else
        {
            while (cnt > 2)
            {
                ans.pop_back();
                cnt--;
            }
            if (cnt == 2)
            {
                if (found == 0)
                {
                    found = 1;
                }
                else
                {
                    ans.pop_back();
                    found = 0;
                }
            }
            else
            {
                found = 0;
            }
            cnt = 1;
            ans.push_back(s[i]);
        }
    }
    while (cnt > 2)
    {
        ans.pop_back();
        cnt--;
    }
    if (cnt == 2)
    {
        if (found == 1)
        {
            ans.pop_back();
        }
    }
    cout << ans << endl;
    return 0;
}