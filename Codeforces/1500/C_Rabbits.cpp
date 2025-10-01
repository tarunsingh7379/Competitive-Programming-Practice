#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<bool> dp(n + 1, false);
        dp[0] = true;
        for (int i = 0; i < n; i++)
        {
            if (!dp[i])
                continue;
            if (s[i] == '1')
            {
                dp[i + 1] = true;
                continue;
            }
            if (i == 0 || s[i - 1] == '0')
            {
                dp[i + 1] = true;
            }
            if (i == n - 1 || s[i + 1] == '0')
            {
                dp[i + 1] = true;
            }
            if (i < n - 2 && s[i + 1] == '1' && s[i + 2] == '0')
            {
                dp[i + 3] = true;
            }
        }
        cout << (dp[n] ? "YES" : "NO") << endl;
        t--;
    }

    return 0;
}