#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll x, y;
    cin >> x >> y;
    vector<ll> a(3, y);
    ll ans = 0;
    while (!(a[0] >= x && a[1] >= x && a[2] >= x))
    {
        sort(a.begin(), a.end());
        a[0] = a[1] + a[2] - 1;
        ans++;
    }
    cout << ans << endl;

    return 0;
}