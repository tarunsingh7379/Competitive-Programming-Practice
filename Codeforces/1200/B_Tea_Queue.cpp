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
        int cur_sec = 0;
        vector<int> ans;
        for (auto num : v)
        {
            while (cur_sec < num.first)
            {
                cur_sec++;
            }
            if (cur_sec > num.second)
            {
                ans.push_back(0);
                continue;
            }
            ans.push_back(cur_sec);
            cur_sec++;
        }
        for (auto num : ans)
        {
            cout << num << " ";
        }
        cout << endl;
        t--;
    }

    return 0;
}