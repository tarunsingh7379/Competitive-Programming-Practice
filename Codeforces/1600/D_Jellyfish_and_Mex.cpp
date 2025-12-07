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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<int> freq(n + 1, 0);
        for (int i = 0; i < n; i++)
        {
            if (a[i] <= n)
            {
                freq[a[i]]++;
            }
        }
        int mex = 0;
        while (freq[mex] > 0)
        {
            mex++;
        }
        vector<int> dp(n + 1, 1e8);
        dp[mex] = 0;
        for (int i = mex; i >= 0; i--)
        {
            for (int j = 0; j < i; j++)
            {
                int cost = dp[i] + i * (freq[j] - 1) + j;
                dp[j] = min(dp[j], cost);
            }
        }
        cout << dp[0] << endl;
        t--;
    }

    return 0;
}