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
        vector<int> row_sum(n, 0);
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                row_sum[i] += a[i][j];
            }
            sum += row_sum[i];
        }
        if (sum % n != 0)
        {
            cout << -1 << endl;
        }
        else
        {
            int single_row_sum = sum / n;
            vector<pair<pair<int, int>, int>> ans;
            for (int j = 0; j < m; j++)
            {
                vector<int> v1, v2;
                for (int i = 0; i < n; i++)
                {
                    if (row_sum[i] > single_row_sum)
                    {
                        if (a[i][j] == 1)
                        {
                            v1.push_back(i);
                        }
                    }
                    else if (row_sum[i] < single_row_sum)
                    {
                        if (a[i][j] == 0)
                        {
                            v2.push_back(i);
                        }
                    }
                }
                for (int i = 0; i < min(v1.size(), v2.size()); i++)
                {
                    ans.push_back({{v1[i] + 1, v2[i] + 1}, j + 1});
                    row_sum[v1[i]]--;
                    row_sum[v2[i]]++;
                }
            }
            cout << ans.size() << endl;
            for (auto num : ans)
            {
                cout << num.first.first << " " << num.first.second << " " << num.second << endl;
            }
        }
        t--;
    }

    return 0;
}