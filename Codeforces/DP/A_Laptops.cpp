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
    int mi = v[n - 1].second;
    bool ok = false;
    for (int i = n - 2; i >= 0; i--)
    {
        if (v[i].second > mi)
        {
            ok = true;
            break;
        }
        mi = min(mi, v[i].second);
    }
    cout << (ok ? "Happy Alex" : "Poor Alex") << endl;
    return 0;
}