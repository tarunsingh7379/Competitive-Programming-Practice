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
        mp[0] = 3;
        mp[1] = 1;
        mp[2] = 2;
        mp[3] = 1;
        mp[5] = 1;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (mp.find(x) != mp.end())
            {
                mp[x]--;
                if (mp[x] == 0)
                    mp.erase(x);
            }
            if (mp.empty() && ans == 0)
            {
                ans = i + 1;
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}