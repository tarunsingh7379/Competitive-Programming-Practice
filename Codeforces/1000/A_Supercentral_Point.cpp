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
    set<pair<int, int>> st;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        v.push_back({x, y});
        st.insert({x, y});
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int x = v[i].first, y = v[i].second;
        int cnt = 0;
        for (int j = -1000; j < x; j++)
        {
            if (st.count({j, y}))
            {
                cnt++;
                break;
            }
        }
        for (int j = x + 1; j <= 1000; j++)
        {
            if (st.count({j, y}))
            {
                cnt++;
                break;
            }
        }
        for (int j = -1000; j < y; j++)
        {
            if (st.count({x, j}))
            {
                cnt++;
                break;
            }
        }
        for (int j = y + 1; j <= 1000; j++)
        {
            if (st.count({x, j}))
            {
                cnt++;
                break;
            }
        }
        if (cnt == 4)
        {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}