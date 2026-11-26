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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        map<int, int> mp;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            mp[a[i]]++;
            cnt = max(cnt, mp[a[i]]);
        }
        int ans = n - cnt;
        cout << ans << "\n";
        t--;
    }

    return 0;
}