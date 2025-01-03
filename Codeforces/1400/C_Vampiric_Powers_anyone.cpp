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
        vector<int> mp(1 << 8, 0);
        int ans = 0, x = 0;
        for (int i = 0; i < n; i++)
        {
            x = x ^ a[i];
            ans = max(ans, x);
            for (int j = 0; j < (1 << 8); j++)
            {
                if (mp[j])
                {
                    ans = max(ans, j ^ x);
                }
            }
            mp[x]++;
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}