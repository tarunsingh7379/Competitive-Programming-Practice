#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x0, y0;
    cin >> n >> x0 >> y0;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        v.push_back({x, y});
    }
    vector<int> vis(n, 0);
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (vis[i])
        {
            continue;
        }
        vis[i] = 1;
        ans++;
        for (int j = i + 1; j < n; j++)
        {
            if (vis[j])
            {
                continue;
            }
            int left = (v[i].first - x0) * (v[j].second - y0);
            int right = (v[j].first - x0) * (v[i].second - y0);
            if (left == right)
            {
                vis[j] = 1;
            }
        }
    }
    cout << ans << endl;
    return 0;
}