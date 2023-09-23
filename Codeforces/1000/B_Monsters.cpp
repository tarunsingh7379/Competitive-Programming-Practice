#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b)
{
    if (a.first == b.first)
    {
        return a.second < b.second;
    }
    return a.first > b.first;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t)
    {
        int n, k;
        cin >> n >> k;
        vector<pair<int, int>> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            x %= k;
            if (!x)
            {
                x = k;
            }
            v.push_back({x, i});
        }
        sort(v.begin(), v.end(), cmp);
        for (auto num : v)
        {
            cout << num.second + 1 << " ";
        }
        cout << endl;
        t--;
    }

    return 0;
}