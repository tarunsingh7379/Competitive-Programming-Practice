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
    vector<pair<ll, ll>> v;
    for (ll i = 0; i < n; i++)
    {
        v.push_back({a[i], i + 1});
    }
    sort(v.begin(), v.end());
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        sum += a[i];
    }
    vector<int> ans;
    for (ll i = 0; i < n - 1; i++)
    {
        ll rem_sum = sum - v[i].first - v[n - 1].first;
        if (rem_sum == v[n - 1].first)
        {
            ans.push_back(v[i].second);
        }
    }

    if (n != 2)
    {
        ll rem_sum = sum - v[n - 1].first - v[n - 2].first;
        if (rem_sum == v[n - 2].first)
        {
            ans.push_back(v[n - 1].second);
        }
    }

    cout << ans.size() << endl;
    for (auto num : ans)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}