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
        string s;
        cin >> s;
        int ans = INT_MAX;
        int l = 0;
        map<int, int> mp;
        for (int r = 0; r < s.size(); r++)
        {
            mp[s[r]]++;
            if (mp.size() == 3)
            {
                while (l < r)
                {
                    if (mp[s[l]] > 1)
                    {
                        mp[s[l]]--;
                        l++;
                    }
                    else
                    {
                        break;
                    }
                }
                ans = min(ans, r - l + 1);
            }
        }
        if (ans == INT_MAX)
        {
            ans = 0;
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}