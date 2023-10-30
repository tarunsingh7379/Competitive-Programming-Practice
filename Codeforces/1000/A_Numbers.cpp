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
    ll sum = 0, cnt = 0;
    for (ll i = 2; i < n; i++)
    {
        ll x = n;
        cnt++;
        while (x)
        {
            sum += x % i;
            x /= i;
        }
    }
    ll g = __gcd(sum, cnt);
    cout << sum / g << "/" << cnt / g << endl;
    return 0;
}