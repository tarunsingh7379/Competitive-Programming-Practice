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
    vector<pair<pair<int, int>, int>> v;

    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        v.push_back({{x, y}, i});
    }
    sort(v.begin(), v.end());
    pair<int, int> ans{-1, -1};
    for (int i = 1; i < n; i++)
    {
        if (v[i].first.second <= v[i - 1].first.second)
        {
            ans.first = v[i].second + 1;
            ans.second = v[i - 1].second + 1;
            break;
        }
        else if (v[i].first.first == v[i - 1].first.first)
        {
            ans.first = v[i - 1].second + 1;
            ans.second = v[i].second + 1;
            break;
        }
    }
    cout << ans.first << " " << ans.second << endl;

    return 0;
}