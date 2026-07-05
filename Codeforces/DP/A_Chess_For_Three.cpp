#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int dp[31][31][31];

int func(int a, int b, int c)
{
    if (a == 0 && b == 0 && c == 0)
        return 0;
    if (a < 0 || b < 0 || c < 0)
        return -1e7;
    if (dp[a][b][c] != -1)
        return dp[a][b][c];
    int ans = -1e7;
    ans = max(ans, 1 + func(a - 1, b - 1, c));
    ans = max(ans, 1 + func(a - 1, b, c - 1));
    ans = max(ans, 1 + func(a, b - 1, c - 1));
    ans = max(ans, func(a - 2, b, c));
    ans = max(ans, func(a, b - 2, c));
    ans = max(ans, func(a, b, c - 2));
    return dp[a][b][c] = ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t)
    {
        vector<int> v(3);
        for (int i = 0; i < 3; i++)
        {
            cin >> v[i];
        }
        memset(dp, -1, sizeof(dp));
        int ans = func(v[0], v[1], v[2]);
        if (ans < 0)
            ans = -1;
        cout << ans << endl;
        t--;
    }

    return 0;
}