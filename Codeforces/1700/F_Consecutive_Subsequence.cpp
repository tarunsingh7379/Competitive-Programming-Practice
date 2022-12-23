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
    map<int, pair<int, int>> mp;
    vector<int> dp(n, 0);
    vector<int> par(n, -1);

    for (int i = 0; i < n; i++)
    {
        if (mp.find(a[i] - 1) != mp.end())
        {
            dp[i] = 1 + mp[a[i] - 1].first;
            par[i] = mp[a[i] - 1].second;
            mp[a[i]] = {dp[i], i};
        }
        else
        {
            dp[i] = 1;
            mp[a[i]] = {dp[i], i};
        }
    }

    int ind = -1;
    int val = 0;
    for (int i = 0; i < n; i++)
    {
        if (dp[i] > val)
        {
            val = dp[i];
            ind = i;
        }
    }

    vector<int> ans;
    ans.push_back(ind);
    while (par[ind] != -1)
    {
        ans.push_back(par[ind]);
        ind = par[ind];
    }
    reverse(ans.begin(), ans.end());
    cout << ans.size() << endl;
    for (auto num : ans)
    {
        cout << (num + 1) << " ";
    }
    cout << endl;

    return 0;
}