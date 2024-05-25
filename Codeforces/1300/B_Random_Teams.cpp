#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m;
    cin >> n >> m;
    ll cnt1 = n % m, cnt2 = m - cnt1;
    ll k1 = (n + m - 1) / m, k2 = n / m;
    ll mi = cnt1 * k1 * (k1 - 1) / 2 + cnt2 * k2 * (k2 - 1) / 2;
    ll k3 = n - m + 1;
    ll ma = k3 * (k3 - 1) / 2;
    cout << mi << " " << ma << endl;

    return 0;
}