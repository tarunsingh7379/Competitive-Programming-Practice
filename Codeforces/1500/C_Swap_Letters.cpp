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
    string a, b;
    cin >> a >> b;
    vector<int> pos1, pos2;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            if (a[i] == 'a')
            {
                pos1.push_back(i + 1);
            }
            else
            {
                pos2.push_back(i + 1);
            }
        }
    }
    int sz1 = pos1.size(), sz2 = pos2.size();
    if (sz1 % 2 != sz2 % 2)
    {
        cout << -1 << endl;
    }
    else
    {
        vector<pair<int, int>> ans;
        for (int i = 0; i < sz1 - 1; i += 2)
        {
            ans.push_back({pos1[i], pos1[i + 1]});
        }
        for (int i = 0; i < sz2 - 1; i += 2)
        {
            ans.push_back({pos2[i], pos2[i + 1]});
        }
        if (sz1 % 2)
        {
            ans.push_back({pos1.back(), pos1.back()});
            ans.push_back({pos1.back(), pos2.back()});
        }
        cout << ans.size() << endl;
        for (auto num : ans)
        {
            cout << num.first << " " << num.second << endl;
        }
    }

    return 0;
}