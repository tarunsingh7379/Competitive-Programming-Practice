#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t)
    {
        int n, d, k;
        cin >> n >> d >> k;
        vector<pair<int, int>> v;
        for (int i = 0; i < k; i++)
        {
            int x, y;
            cin >> x >> y;
            x--;
            y--;
            v.push_back({x, y});
        }

        sort(v.begin(), v.end());
        set<pair<int, int>> st;
        int ind = 0;
        pair<int, int> x = {-1e9, n}, y = {1e9, n};

        for (int i = 0; i + d - 1 < n; i++)
        {
            while (ind < k && v[ind].first <= i + d - 1)
            {
                st.insert({v[ind].second, ind});
                ind++;
            }
            while (!st.empty() && st.begin()->first < i)
            {
                st.erase(st.begin());
            }
            int cnt = st.size();
            if (cnt > x.first)
            {
                x.first = cnt;
                x.second = i;
            }
            if (cnt < y.first)
            {
                y.first = cnt;
                y.second = i;
            }
        }
        cout << x.second + 1 << " " << y.second + 1 << endl;
        t--;
    }

    return 0;
}