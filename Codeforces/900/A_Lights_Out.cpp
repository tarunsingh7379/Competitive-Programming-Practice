#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }

    int dx[] = {-1, 1, 0, 0};
    int dy[] = {0, 0, -1, 1};

    vector<vector<int>> ans(3, vector<int>(3, 0));

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int sum = a[i][j];
            for (int k = 0; k < 4; k++)
            {
                int x = i + dx[k];
                int y = j + dy[k];
                if (x < 3 && y < 3 && x >= 0 && y >= 0)
                {
                    sum += a[x][y];
                }
            }
            if (sum % 2 == 0)
            {
                ans[i][j] = 1;
            }
        }
    }

    for (auto num : ans)
    {
        for (auto x : num)
        {
            cout << x;
        }
        cout << endl;
    }

    return 0;
}