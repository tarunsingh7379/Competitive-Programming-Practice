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

    sort(a, a + n);
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        ll cost = abs(a[i] - (i + 1));
        ans += cost;
    }
    cout << ans << endl;

    return 0;
}