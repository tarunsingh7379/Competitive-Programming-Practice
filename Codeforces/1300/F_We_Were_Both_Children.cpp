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
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
        }
        vector<int> ans(n + 1, 0);
        int res = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j * j <= i; j++)
            {
                if (i % j == 0)
                {
                    ans[i] += mp[j];
                    if (i / j != j)
                    {
                        ans[i] += mp[i / j];
                    }
                }
            }
        }
        for (auto num : ans)
        {
            res = max(res, num);
        }
        cout << res << endl;
        t--;
    }

    return 0;
}