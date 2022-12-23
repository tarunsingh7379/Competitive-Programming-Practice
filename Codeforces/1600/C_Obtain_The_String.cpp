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
        string a, b;
        cin >> a >> b;
        vector<int> f(26, 0);
        for (auto num : a)
        {
            f[num - 'a']++;
        }
        int flag = 1;
        for (auto num : b)
        {
            if (f[num - 'a'] == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 0)
        {
            cout << -1 << endl;
        }
        else
        {

            int n = a.size();
            vector<vector<int>> nxt(n + 1, vector<int>(26, -1));
            for (int i = n - 1; i >= 0; i--)
            {
                for (int j = 0; j < 26; j++)
                {
                    nxt[i][j] = nxt[i + 1][j];
                }
                nxt[i][a[i] - 'a'] = i;
            }
            int j = 0;
            int ans = 1;
            for (int i = 0; i < b.size(); i++)
            {
                if (j == n)
                {
                    j = 0;
                    ans++;
                }
                int z = nxt[j][b[i] - 'a'];
                if (z == -1)
                {
                    j = 0;
                    ans++;
                }

                j = nxt[j][b[i] - 'a'] + 1;
            }

            cout << ans << endl;
        }
        t--;
    }

    return 0;
}