#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    int n = s.size();
    vector<int> dp(n, 0);
    if ((s[0] - '0') % 3 == 0)
    {
        dp[0] = 1;
    }
    int sum = (s[0] - '0') % 3;
    vector<int> prefix(3, -1);
    prefix[sum] = 0;
    for (int i = 1; i < n; i++)
    {
        sum = (sum + (s[i] - '0')) % 3;
        dp[i] = dp[i - 1];
        if (sum == 0)
        {
            dp[i] = max(dp[i], 1);
        }
        if (prefix[sum] != -1)
        {
            dp[i] = max(dp[i], dp[prefix[sum]] + 1);
        }
        prefix[sum] = i;
    }
    cout << dp[n - 1] << endl;

    return 0;
}