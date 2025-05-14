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
        v.push_back({x, 1});
        v.push_back({y + 1, -1});
    }
    sort(v.begin(), v.end());
    int cnt = 0;
    bool ok = true;
    for (int i = 0; i < v.size(); i++)
    {
        cnt += v[i].second;
        if (cnt >= 3)
        {
            ok = false;
            break;
        }
    }
    cout << (ok ? "YES" : "NO") << endl;

    return 0;
}