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
        int n, k, d;
        cin >> n >> k >> d;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        map<int, int> mp;
        for (int i = 0; i < d; i++)
        {
            mp[a[i]]++;
        }
        int ans = mp.size();
        for (int i = d; i < n; i++)
        {
            mp[a[i]]++;
            mp[a[i - d]]--;
            if (mp[a[i - d]] == 0)
            {
                mp.erase(a[i - d]);
            }
            ans = min(ans, (int)mp.size());
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}