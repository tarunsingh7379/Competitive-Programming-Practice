#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, l, r, x;
    cin >> n >> l >> r >> x;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    int cnt = 0;
    int ans = 0, tot = 0;
    int mi, ma;
    for (int i = 0; i < (1 << n); i++)
    {
        cnt = 0;
        tot = 0;
        mi = 1e9;
        ma = 0;
        for (ll j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                mi = min(mi, a[j]);
                ma = max(ma, a[j]);
                tot += a[j];
                cnt++;
            }
        }
        if (ma - mi >= x && cnt >= 2 && tot >= l && tot <= r)
        {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}