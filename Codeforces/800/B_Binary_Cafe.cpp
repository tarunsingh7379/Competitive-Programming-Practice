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
        ll n, k;
        cin >> n >> k;
        k = min(k, 30LL);
        ll ans = min(n + 1, (1LL << k));
        cout << ans << endl;
        t--;
    }

    return 0;
}