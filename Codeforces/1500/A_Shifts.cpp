#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    vector<string> v;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }

    vector<int> ones[n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (v[i][j] == '1')
            {
                ones[i].push_back(j);
            }
        }
        if (ones[i].empty())
        {
            cout << -1 << endl;
            return 0;
        }
    }
    int ans = INT_MAX;
    for (int j = 0; j < m; j++)
    {
        int cur = 0;
        for (int i = 0; i < n; i++)
        {
            int pos = lower_bound(ones[i].begin(), ones[i].end(), j) - ones[i].begin();
            int sz = ones[i].size();
            int cost = INT_MAX;
            for (int k = -1; k <= 1; k++)
            {
                int x = ones[i][(pos + k + sz) % sz];
                cost = min(cost, abs(x - j));
                cost = min(cost, m - abs(x - j));
            }
            cur += cost;
        }
        ans = min(ans, cur);
    }
    cout << ans << endl;
    return 0;
}