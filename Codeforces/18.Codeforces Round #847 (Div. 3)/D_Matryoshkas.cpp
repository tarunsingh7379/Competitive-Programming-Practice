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
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }
        sort(a, a + n);
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (mp[a[i]])
            {
                mp[a[i]]--;
                int num = a[i] + 1;
                while (mp[num])
                {
                    mp[num]--;
                    num++;
                }
                ans++;
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}