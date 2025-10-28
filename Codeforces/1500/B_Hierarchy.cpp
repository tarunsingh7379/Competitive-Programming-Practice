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
    int m;
    cin >> m;
    map<int, int> mp;
    for (int i = 0; i < m; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (mp.find(b) != mp.end())
        {
            mp[b] = min(mp[b], c);
        }
        else
        {
            mp[b] = c;
        }
    }
    int ans = 0, cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        if (mp.find(i) != mp.end())
        {
            ans += mp[i];
        }
        else
        {
            cnt++;
        }
    }
    if (cnt == 1)
    {
        cout << ans << endl;
    }
    else
    {
        cout << -1 << endl;
    }

    return 0;
}