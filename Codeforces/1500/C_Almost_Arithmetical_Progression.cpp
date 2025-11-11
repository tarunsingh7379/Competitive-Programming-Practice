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
    {
        cin >> a[i];
    }
    map<int, int> mp;
    int ind = 0;
    for (auto num : a)
    {
        if (mp.find(num) == mp.end())
        {
            mp[num] = ind++;
        }
    }
    for (auto &num : a)
    {
        num = mp[num];
    }
    int ans = 0;
    vector<vector<int>> dp(ind, vector<int>(ind, 0));
    for (int i = 0; i < n; i++)
    {
        int flag = 0;
        for (int j = 0; j < i; j++)
        {
            if (a[i] == a[j])
            {
                if (!flag)
                {
                    flag = 1;
                    dp[a[i]][a[j]]++;
                }
            }
            else
            {
                dp[a[i]][a[j]] = dp[a[j]][a[i]] + 1;
            }
            ans = max(ans, dp[a[i]][a[j]]);
        }
    }
    cout << ans + 1 << endl;

    return 0;
}