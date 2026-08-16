#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

bool is_valid(int x, int k)
{
    bool valid = false;
    while (x)
    {
        int r = x % 10;
        if (r == k)
        {
            valid = true;
            break;
        }
        x /= 10;
    }
    return valid;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t)
    {
        ll n, k;
        cin >> n >> k;
        ll ma = 10 * k;
        vector<vector<int>> dp(ma + 2, vector<int>(ma + 2, 0));
        for (int i = 0; i <= ma + 1; i++)
        {
            dp[i][0] = 1;
        }
        for (int num = ma; num >= 1; num--)
        {
            for (int sum = 0; sum <= ma; sum++)
            {
                int ans = 0;
                if (is_valid(num, k) && sum >= num)
                {
                    ans |= dp[num + 1][sum - num];
                    ans |= dp[num][sum - num];
                }
                ans |= dp[num + 1][sum];
                dp[num][sum] = ans;
            }
        }
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            if (x >= 10 * k || dp[1][x])
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