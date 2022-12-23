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
        int n, m;
        cin >> n >> m;
        vector<string> v;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            v.push_back(s);
        }

        string ans = v[0];
        int found = 0;
        for (int i = 0; i < m; i++)
        {
            char temp = ans[i];
            for (char c = 'a'; c <= 'z'; c++)
            {
                ans[i] = c;
                int flag = 1;
                for (int j = 0; j < n; j++)
                {
                    int cnt = 0;
                    for (int k = 0; k < m; k++)
                    {
                        if (v[j][k] != ans[k])
                        {
                            cnt++;
                        }
                    }
                    if (cnt > 1)
                    {
                        flag = 0;
                        break;
                    }
                }
                if (flag == 1)
                {
                    found = 1;
                    break;
                }
            }
            if (found == 1)
            {
                break;
            }
            ans[i] = temp;
        }
        if (found == 1)
        {
            cout << ans << endl;
        }
        else
        {
            cout << -1 << endl;
        }
        t--;
    }

    return 0;
}