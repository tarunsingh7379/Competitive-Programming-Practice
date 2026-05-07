#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll l, r;
    cin >> l >> r;
    ll x = l ^ r;
    ll ans = 0;
    while (x)
    {
        ans <<= 1;
        ans |= 1;
        x >>= 1;
    }
    cout << ans << endl;

    return 0;
}