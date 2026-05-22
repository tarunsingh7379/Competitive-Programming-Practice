#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    ll ans = 0;
    if (n & 1)
    {
        ans = 2 * (n / 2 + 1) * (n / 2 + 2);
    }
    else
    {
        ans = (n / 2 + 1) * (n / 2 + 1);
    }
    cout << ans << endl;

    return 0;
}