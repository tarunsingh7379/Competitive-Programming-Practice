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
        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        vector<int> dp(n + 1, 0);
        dp[0] = 1;
        for (int i = 1; i <= n; i++)
        {
            if (dp[i - 1] && i + a[i] <= n)
            {
                dp[i + a[i]] = 1;
            }
            if (i - a[i] - 1 >= 0 && dp[i - a[i] - 1])
            {
                dp[i] = 1;
            }
        }
        cout << (dp[n] ? "YES" : "NO") << endl;
        t--;
    }

    return 0;
}