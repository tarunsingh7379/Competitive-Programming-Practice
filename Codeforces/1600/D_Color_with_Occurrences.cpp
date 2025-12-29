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
        int m;
        cin >> m;
        vector<string> v;
        for (int i = 0; i < m; i++)
        {
            string x;
            cin >> x;
            v.push_back(x);
        }
        vector<pair<pair<int, int>, int>> temp;
        int n = s.size();
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (i + v[j].size() <= n && s.substr(i, v[j].size()) == v[j])
                {
                    temp.push_back({{i, i + (int)v[j].size() - 1}, j + 1});
                }
            }
        }
        vector<pair<int, int>> ans;
        int idx = 0;
        bool ok = true;
        while (idx < n)
        {
            int ma = -1, j = -1, st = -1;
            for (auto num : temp)
            {
                if (num.first.first <= idx && num.first.second >= idx)
                {
                    if (num.first.second > ma)
                    {
                        st = num.first.first;
                        ma = num.first.second;
                        j = num.second;
                    }
                }
            }
            if (j == -1)
            {
                ok = false;
                break;
            }
            ans.push_back({j, st + 1});
            idx = ma + 1;
        }
        if (!ok)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << ans.size() << endl;
            for (auto num : ans)
            {
                cout << num.first << " " << num.second << endl;
            }
        }
        t--;
    }

    return 0;
}