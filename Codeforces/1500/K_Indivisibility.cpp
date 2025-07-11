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

    ll n_div_by_2 = n / 2;
    ll n_div_by_3 = n / 3 - n / (2 * 3);
    ll n_div_by_5 = n / 5 - n / (2 * 5) - n / (3 * 5) + n / (2 * 3 * 5);
    ll n_div_by_7 = n / 7 - n / (2 * 7) - n / (3 * 7) - n / (5 * 7) + n / (2 * 3 * 7) + n / (2 * 5 * 7) + n / (3 * 5 * 7) - n / (2 * 3 * 5 * 7);
    ll ans = n - (n_div_by_2 + n_div_by_3 + n_div_by_5 + n_div_by_7);
    cout << ans << endl;

    return 0;
}