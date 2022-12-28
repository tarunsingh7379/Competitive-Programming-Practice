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
        string s;
        cin >> s;
        map<pair<int, int>, int> mp;
        int x = 0, y = 0;
        ll ans = INT_MAX;
        ll l = 0, r = 0;
        mp[{x, y}] = -1;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'L')
            {
                x--;
            }
            else if (s[i] == 'R')
            {
                x++;
            }
            else if (s[i] == 'U')
            {
                y++;
            }
            else
            {
                y--;
            }
            // cout << x << " " << y << endl;
            if (mp.find({x, y}) != mp.end())
            {
                ll len = i - mp[{x, y}];
                if (len < ans)
                {
                    ans = len;
                    l = mp[{x, y}] + 1;
                    r = i;
                }
            }
            mp[{x, y}] = i;
        }
        if (ans == INT_MAX)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << l + 1 << " " << r + 1 << endl;
        }
        t--;
    }

    return 0;
}