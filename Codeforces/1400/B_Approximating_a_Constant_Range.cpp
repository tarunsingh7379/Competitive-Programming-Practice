#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    map<int, int> mp;
    mp[a[0]]++;
    int l = 0, ans = 0;
    for (int r = 1; r < n; r++)
    {
        mp[a[r]]++;
        while (l < r && (mp.rbegin()->first - mp.begin()->first) > 1)
        {
            mp[a[l]]--;
            if (mp[a[l]] == 0)
            {
                mp.erase(a[l]);
            }
            l++;
        }
        ans = max(ans, r - l + 1);
    }
    cout << ans << endl;
    return 0;
}