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
        ll n, a, b, c;
        cin >> n >> a >> b >> c;
        ll first = n - min(n, a);
        ll second = n - min(n, b);
        ll ans = min(n, a) + min(n, b) + min(c, first + second);
        cout << ans << endl;
        t--;
    }

    return 0;
}