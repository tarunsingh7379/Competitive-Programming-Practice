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
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll mi = 0, ma = 0;
        for (ll i = 0; i < n; i++)
        {
            mi += a[i];
            ma += ((a[i] + k - 1) / k);
        }
        mi = (mi + k - 1) / k;
        cout << mi << " " << ma << endl;
        t--;
    }

    return 0;
}