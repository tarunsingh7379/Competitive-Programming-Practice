#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

bool check_helper(int x, int y, vector<pair<int, int>> &v)
{
    for (auto num : v)
    {
        if (!(num.first == x || num.first == y || num.second == x || num.second == y))
        {
            return false;
        }
    }
    return true;
}

bool check(int x, vector<pair<int, int>> &v)
{
    int y1 = -1, y2 = -1;
    int cnt_y1 = 0, cnt_y2 = 0;
    for (auto num : v)
    {
        if (num.first != x && num.second != x)
        {
            y1 = num.first;
            y2 = num.second;
            break;
        }
    }
    bool ok = check_helper(x, y1, v) | check_helper(x, y2, v);
    return ok;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> v;
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        v.push_back({x, y});
    }
    cout << ((check(v[0].first, v) | check(v[0].second, v)) ? "YES" : "NO") << endl;

    return 0;
}