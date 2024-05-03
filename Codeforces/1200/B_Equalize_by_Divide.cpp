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
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (count(a, a + n, a[0]) == n)
        {
            cout << 0 << endl;
        }
        else if (count(a, a + n, 1) > 0)
        {
            cout << -1 << endl;
        }
        else
        {
            vector<pair<int, int>> ans;
            while (count(a, a + n, a[0]) < n && count(a, a + n, 2) == 0)
            {
                int i = 0;
                while (a[0] == a[i])
                {
                    i++;
                }
                if (a[0] > a[i])
                {
                    ans.push_back({1, i + 1});
                    a[0] = (a[0] + a[i] - 1) / a[i];
                }
                else
                {
                    ans.push_back({i + 1, 1});
                    a[i] = (a[i] + a[0] - 1) / a[0];
                }
            }
            if (count(a, a + n, a[0]) < n)
            {
                int ind = find(a, a + n, 2) - a;
                for (int i = 0; i < n; i++)
                {
                    while (a[i] != 2)
                    {
                        ans.push_back({i + 1, ind + 1});
                        a[i] = (a[i] + 1) / 2;
                    }
                }
            }
            cout << ans.size() << endl;
            for (auto num : ans)
            {
                cout << num.first << " " << num.second << endl;
            }
        }
        t--;
    }

    return 0;
}