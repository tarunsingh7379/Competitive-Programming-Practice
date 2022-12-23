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
    ll ans = 1;
    for (ll i = 10; i >= 1; i--)
    {
        if (n % i == 0)
        {
            ans = i;
            break;
        }
    }
    cout << ans << endl;

    return 0;
}