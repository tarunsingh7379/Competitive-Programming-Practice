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
        int a[n + 1];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        vector<int> dp(n + 1, 1);
        for (int i = 1; i <= n; i++)
        {
            for (int j = 2 * i; j <= n; j += i)
            {
                if (a[j] > a[i])
                {
                    dp[j] = max(dp[j], dp[i] + 1);
                }
            }
        }
        int ans = 0;
        for (auto num : dp)
        {
            ans = max(ans, num);
        }
        cout << ans << endl;

        t--;
    }

    return 0;
}