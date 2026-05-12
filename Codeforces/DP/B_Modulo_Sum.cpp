#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int dp[1001][1001][2];

int func(int ind, int sum, int pick, int n, int m, vector<int> &a)
{
    if (ind >= n)
    {
        return (sum == 0 && pick > 0);
    }
    if (dp[ind][sum][pick] != -1)
    {
        return dp[ind][sum][pick];
    }
    int ans = 0;
    ans |= func(ind + 1, (sum + a[ind]) % m, 1, n, m, a);
    ans |= func(ind + 1, sum, pick, n, m, a);
    return dp[ind][sum][pick] = ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    if (n > m)
    {
        cout << "YES" << endl;
    }
    else
    {
        memset(dp, -1, sizeof(dp));
        if (func(0, 0, 0, n, m, a))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}