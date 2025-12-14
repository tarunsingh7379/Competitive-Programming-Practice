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
    vector<pair<int, int>> v;
    int ma = 0;
    vector<int> pos(1000006, -1);
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        pos[x] = y;
        v.push_back({x, y});
        ma = max(ma, x);
    }
    ma += 5;
    sort(v.begin(), v.end());
    vector<int> dp(ma, 0);
    int res = 0, ans = 0;
    for (int i = 0; i < ma; i++)
    {
        if (pos[i] != -1)
        {
            if (i - pos[i] - 1 >= 0)
            {
                dp[i] = dp[i - pos[i] - 1];
            }
            dp[i]++;
        }
        else
        {
            if (i - 1 >= 0)
            {
                dp[i] = dp[i - 1];
            }
        }
        res = max(res, dp[i]);
    }
    ans = n - res;
    cout << ans << endl;

    return 0;
}