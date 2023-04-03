#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll a, b;
    cin >> a >> b;

    ll ans = 1;
    for (ll i = 1; i <= min(a, b); i++)
    {
        ans *= i;
    }
    cout << ans << endl;

    return 0;
}