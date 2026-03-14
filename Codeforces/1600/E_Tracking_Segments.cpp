#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

bool check(int ind, int n, vector<int> &q, vector<pair<int, int>> &v)
{
    vector<int> a(n, 0);
    for (int i = 0; i <= ind; i++)
    {
        a[q[i]] = 1;
    }
    vector<int> prefix(n, 0);
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
            cnt++;
        prefix[i] = cnt;
    }
    for (auto num : v)
    {
        int ones = prefix[num.second];
        if (num.first - 1 >= 0)
            ones -= prefix[num.first - 1];
        int zeroes = (num.second - num.first + 1) - ones;
        if (ones > zeroes)
            return true;
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t)
    {
        int n, m;
        cin >> n >> m;
        vector<pair<int, int>> v;
        for (int i = 0; i < m; i++)
        {
            int x, y;
            cin >> x >> y;
            x--;
            y--;
            v.push_back({x, y});
        }
        int q;
        cin >> q;
        vector<int> queries(q);
        for (int i = 0; i < q; i++)
        {
            cin >> queries[i];
            queries[i]--;
        }
        int l = 0, r = q - 1;
        int ans = -1;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (check(mid, n, queries, v))
            {
                ans = mid + 1;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}