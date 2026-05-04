#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int func(int ind, string &s, vector<int> &dp)
{
    if (ind >= s.size())
        return 0;
    if (dp[ind] != -1)
        return dp[ind];
    int ans = 0;
    if (ind + 1 < s.size() && s[ind + 1] != '*')
    {
        ans = max(ans, (s[ind + 1] == '@') + func(ind + 1, s, dp));
    }
    if (ind + 2 < s.size() && s[ind + 2] != '*')
    {
        ans = max(ans, (s[ind + 2] == '@') + func(ind + 2, s, dp));
    }
    return dp[ind] = ans;
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
        string s;
        cin >> s;
        vector<int> dp(n, -1);
        cout << func(0, s, dp) << endl;
        t--;
    }

    return 0;
}