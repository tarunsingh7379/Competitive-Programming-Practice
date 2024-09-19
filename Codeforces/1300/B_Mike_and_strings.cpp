#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int func(vector<string> v)
{
    int m = v[0].size();
    int cost = 0;
    for (int i = 1; i < v.size(); i++)
    {
        int cnt = 0;
        while (v[i] != v[0])
        {
            rotate(v[i].begin(), v[i].begin() + 1, v[i].end());
            cnt++;
            if (cnt == m)
            {
                return -1;
            }
        }
        cost += cnt;
    }
    return cost;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<string> v;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }
    int ans = INT_MAX;
    int m = v[0].size();
    for (int i = 0; i < m; i++)
    {
        int cost = func(v);
        if (cost == -1)
        {
            ans = -1;
            break;
        }
        ans = min(ans, i + cost);
        rotate(v[0].begin(), v[0].begin() + 1, v[0].end());
    }
    cout << ans << endl;
    return 0;
}