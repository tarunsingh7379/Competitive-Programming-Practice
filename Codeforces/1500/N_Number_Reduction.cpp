#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t)
    {
        string s;
        cin >> s;
        int k;
        cin >> k;
        int n = s.size();
        vector<vector<int>> pos(10);
        for (int i = 0; i < n; i++)
        {
            pos[s[i] - '0'].push_back(i);
        }
        int idx = 0;
        string ans;
        while (idx < n)
        {
            if (k == 0)
            {
                ans = ans + s.substr(idx);
                break;
            }
            int st = ans.size() > 0 ? 0 : 1;
            for (int d = st; d <= 9; d++)
            {
                int j = lower_bound(pos[d].begin(), pos[d].end(), idx) - pos[d].begin();
                if (j < pos[d].size())
                {
                    int x = pos[d][j];
                    int cost = x - idx;
                    if (cost <= k)
                    {
                        k -= cost;
                        idx = (x + 1);
                        ans.push_back(d + '0');
                        break;
                    }
                }
            }
        }
        while (k > 0 && ans.size() > 0)
        {
            ans.pop_back();
            k--;
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}