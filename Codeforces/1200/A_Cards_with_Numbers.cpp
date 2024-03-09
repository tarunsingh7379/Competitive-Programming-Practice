#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    map<int, vector<int>> mp;
    for (int i = 0; i < 2 * n; i++)
    {
        int x;
        cin >> x;
        mp[x].push_back(i + 1);
    }
    vector<pair<int, int>> ans;
    int flag = 1;
    for (auto num : mp)
    {
        if (((num.second.size()) % 2) != 0)
        {
            flag = 0;
            break;
        }
        for (int i = 0; i < num.second.size(); i += 2)
        {
            ans.push_back({num.second[i], num.second[i + 1]});
        }
    }
    if (flag)
    {
        for (auto num : ans)
        {
            cout << num.first << " " << num.second << endl;
        }
    }
    else
    {
        cout << -1 << endl;
    }

    return 0;
}