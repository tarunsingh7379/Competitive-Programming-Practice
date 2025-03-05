#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

bool check(int r, int c, int n, int &cnt, vector<vector<int>> &grid)
{
    for (int k = c - 1; k <= c + 1; k++)
    {
        if (k >= 0 && k < n)
        {
            cnt += grid[r][c] & grid[r ^ 1][k];
        }
    }
    grid[r][c] ^= 1;
    for (int k = c - 1; k <= c + 1; k++)
    {
        if (k >= 0 && k < n)
        {
            cnt -= grid[r][c] & grid[r ^ 1][k];
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;
    cin >> n >> q;
    vector<vector<int>> grid(2, vector<int>(n, 0));
    int cnt = 0;
    for (int i = 0; i < q; i++)
    {
        int r, c;
        cin >> r >> c;
        r--;
        c--;
        check(r, c, n, cnt, grid);
        if (!cnt)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}