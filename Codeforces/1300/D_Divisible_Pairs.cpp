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
        int n, x, y;
        cin >> n >> x >> y;
        int a[n];
        map<pair<int, int>, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll ans = 0;
        for (ll i = 0; i < n; i++)
        {
            ans = ans + mp[{(x - a[i] % x) % x, a[i] % y}];
            mp[{a[i] % x, a[i] % y}]++;
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}