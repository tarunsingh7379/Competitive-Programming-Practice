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
        int n, m;
        cin >> n >> m;
        int a[n];
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]] = i + 1;
        }
        ll ans = 0, last = 0, taken = 0;
        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            int pos = mp[x];
            if (last == 0)
            {
                ans = ans + 2 * (pos - 1) + 1;
                last = pos;
                taken++;
            }
            else
            {
                if (pos < last)
                {
                    ans++;
                    taken++;
                }
                else
                {
                    ans = ans + 2 * (pos - taken - 1) + 1;
                    last = pos;
                    taken++;
                }
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}