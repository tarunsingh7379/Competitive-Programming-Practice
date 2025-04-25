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
    ll total_ways = 1, non_favorable_ways = 1;
    for (ll i = 1; i <= 3 * n; i++)
    {
        total_ways = (total_ways * 3) % M;
    }
    for (ll i = 1; i <= n; i++)
    {
        non_favorable_ways = (non_favorable_ways * 7) % M;
    }
    ll ans = (total_ways - non_favorable_ways + M) % M;
    cout << ans << endl;

    return 0;
}