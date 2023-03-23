#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int func(int ind, int sum, vector<int> &a, vector<vector<int>> &dp)
{
    if (sum < 0)
    {
        return 0;
    }
    if (ind >= a.size())
    {
        if (sum == 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    if (dp[ind][sum] != -1)
    {
        return dp[ind][sum];
    }
    int ans = 0;
    ans = ans | func(ind + 1, sum - a[ind], a, dp);
    ans = ans | func(ind + 1, sum, a, dp);
    return dp[ind][sum] = ans;
}

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
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        if (sum % 2 != 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            sum /= 2;
            vector<vector<int>> dp(n, vector<int>(sum + 1, -1));
            if (func(0, sum, a, dp))
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        t--;
    }

    return 0;
}