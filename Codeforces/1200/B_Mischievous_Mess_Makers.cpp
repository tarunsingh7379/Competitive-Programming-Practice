#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, k;
    cin >> n >> k;
    ll s = max(n - 2 * k, 0LL);
    ll ans = n * (n - 1) / 2 - s * (s - 1) / 2;
    cout << ans << endl;
    return 0;
}