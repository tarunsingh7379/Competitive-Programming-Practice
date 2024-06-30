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
    map<int, vector<int>> mp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp[x].push_back(i);
    }
    vector<pair<int, int>> ans;
    for (auto num : mp)
    {
        if (num.second.size() > 1)
        {
            int d = num.second[1] - num.second[0];
            int flag = 1;
            for (int i = 2; i < num.second.size(); i++)
            {
                if (num.second[i] - num.second[i - 1] != d)
                {
                    flag = 0;
                    break;
                }
            }
            if (flag)
            {
                ans.push_back({num.first, d});
            }
        }
        else
        {
            ans.push_back({num.first, 0});
        }
    }
    cout << ans.size() << endl;
    for (auto num : ans)
    {
        cout << num.first << " " << num.second << endl;
    }

    return 0;
}