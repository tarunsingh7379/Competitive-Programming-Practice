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
        int odd = 0, even = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int ans = INT_MAX;
        for (int k = 0; k < 2; k++)
        {
            vector<int> x, y;
            for (int i = k; i < n; i += 2)
            {
                x.push_back(i);
            }
            for (int i = 0; i < n; i++)
            {
                if (a[i] % 2 == 0)
                {
                    y.push_back(i);
                }
            }
            if (x.size() == y.size())
            {
                int cnt = 0;
                for (int i = 0; i < x.size(); i++)
                {
                    cnt = cnt + abs(x[i] - y[i]);
                }
                ans = min(ans, cnt);
            }
        }
        if (ans == INT_MAX)
        {
            ans = -1;
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}