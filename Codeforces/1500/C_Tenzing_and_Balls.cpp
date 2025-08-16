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
        vector<int> dp(n + 1, 0), best(n + 1, INT_MAX);
        for (int i = 1; i <= n; i++)
        {
            dp[i] = dp[i - 1] + 1;
            dp[i] = min(dp[i], best[a[i]]);
            best[a[i]] = min(best[a[i]], dp[i - 1]);
        }
        cout << n - dp[n] << endl;
        t--;
    }

    return 0;
}