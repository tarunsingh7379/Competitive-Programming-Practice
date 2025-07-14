#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t, s, k;
    cin >> t >> s >> k;
    ll ans = 0;
    while (s < t)
    {
        s *= k;
        ans++;
    }
    cout << ans << endl;

    return 0;
}