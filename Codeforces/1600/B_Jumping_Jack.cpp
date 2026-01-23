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
    n = abs(n);
    ll sum = 0;
    ll ans = 0;
    for (ll i = 0;; i++)
    {
        sum += i;
        if (sum >= n && (sum - n) % 2 == 0)
        {
            ans = i;
            break;
        }
    }
    cout << ans << endl;
    return 0;
}