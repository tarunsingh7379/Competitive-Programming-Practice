#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, w;
    cin >> n >> w;
    int a[n];
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        v.push_back({a[i], i});
    }
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    vector<int> ans(n, 0);
    int ok = 1;

    for (int i = 0; i < n; i++)
    {
        int req = (v[i].first + 1) / 2;
        if (w < req)
        {
            ok = 0;
            break;
        }
        w -= req;
        ans[v[i].second] = req;
    }
    int ind = 0;
    while (w && ok)
    {
        int rem = v[ind].first - ans[v[ind].second];
        if (w >= rem)
        {
            w -= rem;
            ans[v[ind].second] += rem;
        }
        else
        {
            ans[v[ind].second] += w;
            w = 0;
        }
        ind++;
    }
    if (w > 0)
    {
        ok = 0;
    }
    if (ok)
    {
        for (auto num : ans)
        {
            cout << num << " ";
        }
        cout << endl;
    }
    else
    {
        cout << -1 << endl;
    }

    return 0;
}