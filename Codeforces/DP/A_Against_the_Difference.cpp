#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int func(int ind, map<int, vector<int>> &mp, vector<int> &a, vector<int> &dp)
{
    if (ind >= a.size())
    {
        return 0;
    }
    if (dp[ind] != -1)
    {
        return dp[ind];
    }
    int ans = 0;
    int mp_ind = lower_bound(mp[a[ind]].begin(), mp[a[ind]].end(), ind) - mp[a[ind]].begin();
    if (mp_ind + a[ind] - 1 < mp[a[ind]].size())
    {
        ans = max(ans, a[ind] + func(mp[a[ind]][mp_ind + a[ind] - 1] + 1, mp, a, dp));
    }
    ans = max(ans, func(ind + 1, mp, a, dp));
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
        vector<int> a(n);
        map<int, vector<int>> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]].push_back(i);
        }
        vector<int> dp(n, -1);
        cout << func(0, mp, a, dp) << endl;
        t--;
    }

    return 0;
}