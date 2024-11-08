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
    vector<pair<int, int>> v;
    for (ll i = 0; i < n; i++)
    {
        ll x, y;
        cin >> x >> y;
        v.push_back({x, i});
        v.push_back({y, i + n});
    }
    vector<int> ans(2 * n, 0);
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        ans[v[i].second] = 1;
        if (i < n / 2)
        {
            ans[i] = 1;
            ans[i + n] = 1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << ans[i];
    }
    cout << endl;
    for (int i = n; i < 2 * n; i++)
    {
        cout << ans[i];
    }
    cout << endl;

    return 0;
}