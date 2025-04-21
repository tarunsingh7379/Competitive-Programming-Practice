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
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= 30; j++)
        {
            int x = (1 << j);
            if (x >= a[i])
            {
                int req = x - a[i];
                ans += mp[req];
            }
        }
        mp[a[i]]++;
    }
    cout << ans << endl;

    return 0;
}