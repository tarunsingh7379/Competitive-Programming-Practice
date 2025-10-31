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
    vector<string> v;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }
    vector<vector<int>> dp(26, vector<int>(26, 0));
    for (auto s : v)
    {
        int first = s[0] - 'a';
        int last = s.back() - 'a';
        for (int i = 0; i < 26; i++)
        {
            if (dp[i][first])
            {
                dp[i][last] = max(dp[i][last], dp[i][first] + (int)s.size());
            }
        }
        dp[first][last] = max(dp[first][last], (int)s.size());
    }
    int ans = 0;
    for (int i = 0; i < 26; i++)
    {
        ans = max(ans, dp[i][i]);
    }
    cout << ans << endl;

    return 0;
}