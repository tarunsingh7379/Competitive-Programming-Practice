#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t)
    {
        ll n;
        cin >> n;
        ll rem = n % 2048;
        n = n / 2048;
        ll ans = n * __builtin_popcount(2048) + __builtin_popcount(rem);
        cout << ans << endl;
        t--;
    }

    return 0;
}