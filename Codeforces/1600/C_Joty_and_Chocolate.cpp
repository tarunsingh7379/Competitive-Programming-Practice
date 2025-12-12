#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;
    ll total_a = n / a;
    ll total_b = n / b;
    ll lcm_ab = (a * b) / __gcd(a, b);
    ll total_both = n / lcm_ab;
    ll ans = total_a * p + total_b * q - total_both * min(p, q);
    cout << ans << endl;

    return 0;
}