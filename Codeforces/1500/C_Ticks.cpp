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
        ll n, m, k;
        cin >> n >> m >> k;
        vector<string> v;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            v.push_back(s);
        }

        vector<vector<int>> vis(n, vector<int>(m, 0));
        ll flag = 1;
        for (int i = n - 1; i >= 0; i--)
        {
            for (int j = 0; j < m; j++)
            {
                if (v[i][j] == '*')
                {

                    int x = i, y = j;
                    x--;
                    y--;
                    ll cnt1 = 0;
                    while (x >= 0 && y >= 0 && v[x][y] == '*')
                    {
                        cnt1++;
                        x--;
                        y--;
                    }
                    ll cnt2 = 0;
                    x = i;
                    y = j;
                    x--;
                    y++;
                    while (x >= 0 && y < m && v[x][y] == '*')
                    {
                        cnt2++;
                        x--;
                        y++;
                    }
                    ll d = min(cnt1, cnt2);

                    if (d >= k)
                    {
                        x = i;
                        y = j;
                        x--;
                        y--;
                        ll z = d;
                        while (x >= 0 && y >= 0 && z > 0)
                        {
                            vis[x][y] = 1;
                            x--;
                            y--;
                            z--;
                        }
                        x = i;
                        y = j;
                        x--;
                        y++;
                        z = d;
                        while (x >= 0 && y < m && z > 0)
                        {
                            vis[x][y] = 1;
                            x--;
                            y++;
                            z--;
                        }
                    }
                    else if (vis[i][j] == 0)
                    {
                        flag = 0;
                        break;
                    }
                }
            }
            if (flag == 0)
            {
                break;
            }
        }
        cout << (flag ? "YES" : "NO") << endl;
        t--;
    }

    return 0;
}