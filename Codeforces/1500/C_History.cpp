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
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        v.push_back({x, y});
    }
    sort(v.begin(), v.end());
    int ans = 0, last = v[0].second;
    for (int i = 1; i < n; i++)
    {
        if (v[i].second < last)
        {
            ans++;
        }
        else
        {
            last = v[i].second;
        }
    }
    cout << ans << endl;

    return 0;
}