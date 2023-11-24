#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, s;
    cin >> n >> s;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        v.push_back({x, y});
    }
    sort(v.begin(), v.end());
    int t = 0, last = s;
    for (int i = n - 1; i >= 0; i--)
    {
        t += (last - v[i].first);
        if (t < v[i].second)
        {
            t += (v[i].second - t);
        }
        last = v[i].first;
    }
    t += (last);
    cout << t << endl;

    return 0;
}