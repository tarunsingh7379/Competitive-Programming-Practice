#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<vector<int>> ans(n, vector<int>(n, 0));
    for (int i = 0; i < n / 2; i++)
    {
        for (int j = 0; j < n / 2 - i; j++)
        {
            int x1 = i, x2 = n - i - 1;
            int y1 = j, y2 = n - j - 1;
            ans[x1][y1] = 1;
            ans[x1][y2] = 1;
            ans[x2][y1] = 1;
            ans[x2][y2] = 1;
        }
    }
    int even = 2, odd = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (ans[i][j])
            {
                ans[i][j] = even;
                even += 2;
            }
            else
            {
                ans[i][j] = odd;
                odd += 2;
            }
        }
    }
    for (auto num : ans)
    {
        for (auto x : num)
        {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}