#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

bool cmp(pair<int, int> &a, pair<int, int> &b)
{
    return (a.first + a.second) < (b.first + b.second);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t)
    {
        int n;
        cin >> n;
        vector<pair<int, int>> v;
        for (int i = 0; i < n; i++)
        {
            int x, y;
            cin >> x >> y;
            v.push_back({x, y});
        }
        sort(v.begin(), v.end(), cmp);
        for (auto num : v)
        {
            cout << num.first << " " << num.second << " ";
        }
        cout << endl;
        t--;
    }
    return 0;
}