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
        int ma = -50, ind = -1;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] > ma)
            {
                ma = a[i];
                ind = i;
            }
        }
        vector<pair<int, int>> ans;
        if (ma <= 0)
        {
            for (int i = n - 2; i >= 0; i--)
            {
                ans.push_back({i, i + 1});
            }
        }
        else
        {
            for (int i = 0; i < 5; i++)
            {
                ans.push_back({ind, ind});
                a[ind] += a[ind];
            }
            int last = ind;
            for (int i = 1; i < n; i++)
            {
                ans.push_back({i, last});
                a[i] += a[last];
                ans.push_back({i, last});
                a[i] += a[last];
                last = i;
            }
        }
        cout << ans.size() << endl;
        for (auto num : ans)
        {
            cout << num.first + 1 << " " << num.second + 1 << endl;
        }
        t--;
    }

    return 0;
}