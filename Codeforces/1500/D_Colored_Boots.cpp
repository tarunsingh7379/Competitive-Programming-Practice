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
    vector<vector<int>> v1(26), v2(26);
    vector<int> q1, q2;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != '?')
        {
            v1[a[i] - 'a'].push_back(i + 1);
        }
        else
        {
            q1.push_back(i + 1);
        }
        if (b[i] != '?')
        {
            v2[b[i] - 'a'].push_back(i + 1);
        }
        else
        {
            q2.push_back(i + 1);
        }
    }
    vector<pair<int, int>> ans;
    for (int i = 0; i < 26; i++)
    {
        while (v1[i].size() > 0 && v2[i].size() > 0)
        {
            ans.push_back({v1[i].back(), v2[i].back()});
            v1[i].pop_back();
            v2[i].pop_back();
        }
        if (v1[i].size() > 0)
        {
            while (v1[i].size() > 0 && q2.size() > 0)
            {
                ans.push_back({v1[i].back(), q2.back()});
                v1[i].pop_back();
                q2.pop_back();
            }
        }
        if (v2[i].size() > 0)
        {
            while (v2[i].size() > 0 && q1.size() > 0)
            {
                ans.push_back({q1.back(), v2[i].back()});
                v2[i].pop_back();
                q1.pop_back();
            }
        }
    }
    while (q1.size() > 0 && q2.size() > 0)
    {
        ans.push_back({q1.back(), q2.back()});
        q1.pop_back();
        q2.pop_back();
    }

    cout << ans.size() << endl;
    for (auto num : ans)
    {
        cout << num.first << " " << num.second << endl;
    }

    return 0;
}