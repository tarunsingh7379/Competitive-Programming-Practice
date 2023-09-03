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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        map<char, int> mp;
        for (auto c : s)
        {
            mp[c]++;
        }
        int ans = 0;
        for (int i = 0; i < 26; i++)
        {
            int x = min(mp['a' + i], mp['A' + i]);
            ans = ans + x;
            mp['a' + i] -= x;
            mp['A' + i] -= x;
            if (mp['a' + i] != 0)
            {
                int z = min(k, mp['a' + i] / 2);
                ans = ans + z;
                k -= z;
            }
            else
            {
                int z = min(k, mp['A' + i] / 2);
                ans = ans + z;
                k -= z;
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}