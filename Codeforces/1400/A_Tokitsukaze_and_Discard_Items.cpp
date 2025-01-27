#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m, k;
    cin >> n >> m >> k;
    ll a[m];
    for (ll i = 0; i < m; i++)
    {
        cin >> a[i];
    }

    ll ind = 0, del = 0, ans = 0, prev_ind = 0, page = 0;
    while (ind < m)
    {
        page = (a[ind] - del - 1) / k;
        prev_ind = ind;
        while (ind < m && (a[ind] - del - 1) / k == page)
        {
            ind++;
        }
        ans++;
        del += (ind - prev_ind);
    }
    cout << ans << endl;

    return 0;
}