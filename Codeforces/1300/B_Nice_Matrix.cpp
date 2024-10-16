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
        int a[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        ll ans = 0;
        for (int i = 0; i <= (n - 1) / 2; i++)
        {
            for (int j = 0; j <= (m - 1) / 2; j++)
            {
                set<pair<int, int>> st;
                st.insert({i, j});
                st.insert({n - 1 - i, j});
                st.insert({i, m - 1 - j});
                st.insert({n - 1 - i, m - 1 - j});
                vector<int> temp;
                for (auto num : st)
                {
                    temp.push_back(a[num.first][num.second]);
                }
                sort(temp.begin(), temp.end());
                if (temp.size() != 1)
                {
                    for (auto num : temp)
                    {
                        ans += abs(num - temp[1]);
                    }
                }
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}