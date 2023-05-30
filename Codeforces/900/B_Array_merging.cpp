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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int cnt = 1;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] == a[i + 1])
            {
                cnt++;
            }
            else
            {
                mp[a[i]] = max(mp[a[i]], cnt);
                cnt = 1;
            }
        }
        mp[a[n - 1]] = max(mp[a[n - 1]], cnt);
        map<int, int> mp1;
        cnt = 1;
        for (int i = 0; i < n - 1; i++)
        {
            if (b[i] == b[i + 1])
            {
                cnt++;
            }
            else
            {
                mp1[b[i]] = max(mp1[b[i]], cnt);
                cnt = 1;
            }
        }
        mp1[b[n - 1]] = max(mp1[b[n - 1]], cnt);
        int ans = 0;
        for (auto num : mp)
        {
            ans = max(ans, num.second + mp1[num.first]);
        }
        for (auto num : mp1)
        {
            ans = max(ans, num.second + mp[num.first]);
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}