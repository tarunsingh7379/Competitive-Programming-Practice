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
    int b[n];
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        mp[b[i]] = i;
    }
    int last = -1;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int cur = mp[a[i]];
        int d = cur - last - 1;
        if (d >= 0)
        {
            ans += d;
            last = cur;
        }
    }
    cout << ans << endl;

    return 0;
}