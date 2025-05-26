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
        int n;
        cin >> n;
        vector<pair<pair<int, int>, int>> v;
        for (int i = 0; i < n; i++)
        {
            int x, y;
            cin >> x >> y;
            v.push_back({{x, y}, i});
        }
        sort(v.begin(), v.end());
        vector<int> ans(n, 2);
        pair<int, int> cur = v[0].first;
        ans[v[0].second] = 1;
        bool ok = false;
        for (int i = 1; i < n; i++)
        {
            if (v[i].first.first <= cur.second)
            {
                cur.second = max(cur.second, v[i].first.second);
                ans[v[i].second] = 1;
            }
            else
            {
                ok = true;
                break;
            }
        }
        if (!ok)
        {
            cout << -1 << endl;
        }
        else
        {
            for (auto num : ans)
            {
                cout << num << " ";
            }
            cout << endl;
        }
        t--;
    }

    return 0;
}