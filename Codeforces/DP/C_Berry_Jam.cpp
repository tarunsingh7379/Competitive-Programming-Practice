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
        int a[2 * n];
        for (int i = 0; i < 2 * n; i++)
        {
            cin >> a[i];
        }
        int diff = 0;
        for (int i = 0; i < 2 * n; i++)
        {
            if (a[i] == 1)
            {
                diff++;
            }
            else
            {
                diff--;
            }
        }
        int sum = 0;
        map<int, int> mp;
        mp[0] = 0;
        int ans = 2 * n;
        if (diff == 0)
        {
            ans = 0;
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i + n] == 1)
            {
                sum++;
            }
            else
            {
                sum--;
            }
            if (mp.find(sum) == mp.end())
            {
                mp[sum] = i + 1;
            }
        }
        sum = 0;
        if (mp.find(diff) != mp.end())
        {
            ans = mp[diff];
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (a[i] == 1)
            {
                sum++;
            }
            else
            {
                sum--;
            }
            int req = diff - sum;
            if (mp.find(req) != mp.end())
            {
                ans = min(ans, mp[req] + (n - i));
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}