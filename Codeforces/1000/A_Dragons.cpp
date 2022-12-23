#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int s, n;
    cin >> s >> n;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        v.push_back({x, y});
    }

    sort(v.begin(), v.end());

    int flag = 1;
    for (int i = 0; i < n; i++)
    {
        if (s > v[i].first)
        {
            s += v[i].second;
        }
        else
        {
            flag = 0;
            break;
        }
    }

    cout << (flag ? "YES" : "NO") << endl;

    return 0;
}