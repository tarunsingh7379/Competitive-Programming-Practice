#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int func(int ind, int sum, int req, vector<int> &a, vector<vector<int>> &dp)
{
    if (ind >= a.size())
    {
        return sum == req;
    }
    if (dp[ind][sum] != -1)
    {
        return dp[ind][sum];
    }
    int ans = 0;
    ans |= func(ind + 1, sum + a[ind], req, a, dp);
    ans |= func(ind + 1, sum, req, a, dp);
    return dp[ind][sum] = ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> a(n);
    int total_sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        total_sum += a[i];
    }

    if (total_sum % 2 != 0)
    {
        cout << 0 << endl;
    }
    else
    {
        vector<vector<int>> dp(n, vector<int>(total_sum + 1, -1));
        int x = func(0, 0, total_sum / 2, a, dp);
        if (!x)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << 1 << endl;
            while (1)
            {
                for (int i = 0; i < n; i++)
                {
                    if (a[i] & 1)
                    {
                        cout << i + 1 << endl;
                        return 0;
                    }
                    a[i] /= 2;
                }
            }
        }
    }

    return 0;
}