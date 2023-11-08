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
    map<string, int> mp;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            string x = s.substr(i, j - i + 1);
            int flag = 1;
            for (auto c : x)
            {
                if (c != '4' && c != '7')
                {
                    flag = 0;
                    break;
                }
            }
            if (flag == 1)
            {
                mp[x]++;
            }
        }
    }

    int ans = 0;
    for (auto num : mp)
    {
        ans = max(ans, num.second);
    }

    for (auto num : mp)
    {
        if (num.second == ans)
        {
            cout << num.first << endl;
            break;
        }
    }

    if (ans == 0)
    {
        cout << -1 << endl;
    }

    return 0;
}