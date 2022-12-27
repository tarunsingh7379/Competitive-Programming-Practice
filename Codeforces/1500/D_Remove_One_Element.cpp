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
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<vector<int>> v;
    vector<int> temp;
    temp.push_back(a[0]);
    for (int i = 1; i < n; i++)
    {
        if (a[i] > temp.back())
        {
            temp.push_back(a[i]);
        }
        else
        {
            v.push_back(temp);
            temp.clear();
            temp.push_back(a[i]);
        }
    }
    if (temp.size() > 0)
    {
        v.push_back(temp);
    }
    int ans = 0;
    for (int i = 0; i < v.size() - 1; i++)
    {
        int curr = v[i].size(), right = v[i + 1].size();
        ans = max(ans, curr);
        if (right > 1 && v[i].back() < v[i + 1][1])
        {
            ans = max(ans, curr + right - 1);
        }
        if (curr > 1 && v[i][curr - 2] < v[i + 1][0])
        {
            ans = max(ans, curr - 1 + right);
        }
    }
    ans = max(ans, (int)v.back().size());
    cout << ans << endl;

    return 0;
}