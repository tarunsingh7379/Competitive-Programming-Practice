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
    vector<vector<int>> v(n, vector<int>(n, 1));
    int ans = 1;
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            v[i][j] = v[i - 1][j] + v[i][j - 1];
            ans = max(ans, v[i][j]);
        }
    }
    cout << ans << endl;

    return 0;
}