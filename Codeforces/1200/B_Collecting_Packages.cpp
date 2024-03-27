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
        vector<pair<int, int>> v;
        for (int i = 0; i < n; i++)
        {
            int x, y;
            cin >> x >> y;
            v.push_back({x, y});
        }
        sort(v.begin(), v.end());
        int x = 0, y = 0;
        int flag = 1;
        string ans;
        for (auto num : v)
        {
            int r = num.first - x;
            int u = num.second - y;
            if (r < 0 || u < 0)
            {
                flag = 0;
                break;
            }
            ans += string(r, 'R');
            ans += string(u, 'U');
            x = num.first;
            y = num.second;
        }
        if (flag)
        {
            cout << "YES" << endl;
            cout << ans << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        t--;
    }

    return 0;
}