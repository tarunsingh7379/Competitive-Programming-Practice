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
        int n, s1, s2;
        cin >> n >> s1 >> s2;
        vector<pair<int, int>> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back({x, i});
        }
        sort(v.begin(), v.end());
        reverse(v.begin(), v.end());
        vector<int> ans1, ans2;

        for (int i = 0; i < n; i++)
        {
            int ind = v[i].second;
            int cost1 = ans1.size() * s1 + s1;
            int cost2 = ans2.size() * s2 + s2;
            if (cost1 <= cost2)
            {
                ans1.push_back(ind + 1);
            }
            else
            {
                ans2.push_back(ind + 1);
            }
        }

        cout << ans1.size() << " ";
        for (auto num : ans1)
        {
            cout << num << " ";
        }
        cout << endl;
        cout << ans2.size() << " ";
        for (auto num : ans2)
        {
            cout << num << " ";
        }
        cout << endl;
        t--;
    }

    return 0;
}