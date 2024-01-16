#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    map<int, int> mp;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp[x]++;
    }
    if (mp[5] > 0 || mp[7] > 0)
    {
        cout << -1 << endl;
    }
    else
    {
        vector<vector<int>> ans;
        while (mp[1] > 0 && mp[2] > 0 && mp[4] > 0)
        {
            ans.push_back({1, 2, 4});
            mp[1]--;
            mp[2]--;
            mp[4]--;
        }
        while (mp[1] > 0 && mp[2] > 0 && mp[6] > 0)
        {
            ans.push_back({1, 2, 6});
            mp[1]--;
            mp[2]--;
            mp[6]--;
        }
        while (mp[1] > 0 && mp[3] > 0 && mp[6] > 0)
        {
            ans.push_back({1, 3, 6});
            mp[1]--;
            mp[3]--;
            mp[6]--;
        }
        if (mp[1] > 0 || mp[2] > 0 || mp[3] > 0 || mp[4] > 0 || mp[6] > 0)
        {
            cout << -1 << endl;
        }
        else
        {
            for (auto num : ans)
            {
                for (auto x : num)
                {
                    cout << x << " ";
                }
                cout << endl;
            }
        }
    }
    return 0;
}