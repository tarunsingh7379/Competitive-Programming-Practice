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
        ll n;
        cin >> n;
        ll a[n];
        ll ma = 0, sum = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
            ma = max(ma, a[i]);
        }
        ll k = max(ma, (sum + n - 2) / (n - 1));
        cout << (n - 1) * k - sum << endl;
        t--;
    }

    return 0;
}