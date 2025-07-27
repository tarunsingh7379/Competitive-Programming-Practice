#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    vector<string> v;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }
    vector<vector<int>> prefix(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            prefix[i][j] = v[i][j] - '0';
            if (i - 1 >= 0)
            {
                prefix[i][j] += prefix[i - 1][j];
            }
            if (j - 1 >= 0)
            {
                prefix[i][j] += prefix[i][j - 1];
            }
            if (i - 1 >= 0 && j - 1 >= 0)
            {
                prefix[i][j] -= prefix[i - 1][j - 1];
            }
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            for (int k = i; k < n; k++)
            {
                for (int l = j; l < m; l++)
                {
                    int sum = prefix[k][l];
                    if (i - 1 >= 0)
                        sum -= prefix[i - 1][l];
                    if (j - 1 >= 0)
                        sum -= prefix[k][j - 1];
                    if (i - 1 >= 0 && j - 1 >= 0)
                        sum += prefix[i - 1][j - 1];
                    if (!sum)
                    {
                        ans = max(ans, (k - i + 1) * 2 + (l - j + 1) * 2);
                    }
                }
            }
        }
    }
    cout << ans << endl;

    return 0;
}