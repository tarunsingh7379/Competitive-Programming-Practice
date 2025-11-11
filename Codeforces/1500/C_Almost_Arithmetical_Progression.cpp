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
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int ans = 0;
    vector<unordered_map<int, int>> dp(n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            dp[i][a[j]] = max({dp[i][a[j]], 2, dp[j][a[i]] + 1});
            ans = max(ans, dp[i][a[j]]);
        }
    }

    cout << ans << endl;

    return 0;
}