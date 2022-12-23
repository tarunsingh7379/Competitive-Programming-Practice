#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int func(int num, vector<int> &v, vector<int> &dp)
{
    if (num == 0)
    {
        return 0;
    }

    if (dp[num] != -1)
    {
        return dp[num];
    }

    int ans = -1e5;
    for (int i = 0; i < 3; i++)
    {
        if (num >= v[i])
        {
            ans = max(ans, 1 + func(num - v[i], v, dp));
        }
    }
    return dp[num] = ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> v(3);
    cin >> v[0] >> v[1] >> v[2];
    vector<int> dp(n + 1, -1);
    int ans = func(n, v, dp);
    cout << ans << endl;

    return 0;
}