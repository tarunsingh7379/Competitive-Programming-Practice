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
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        ll sum = 0, cnt = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll mi = INT_MAX, ma = INT_MIN;
        for (ll i = 0; i < n; i++)
        {
            if (i < n - 1 && a[i] != -1 && a[i + 1] == -1)
            {
                mi = min(mi, a[i]);
                ma = max(ma, a[i]);
            }
            if (i > 0 && a[i] != -1 && a[i - 1] == -1)
            {
                mi = min(mi, a[i]);
                ma = max(ma, a[i]);
            }
        }
        ll k = (mi + ma) / 2;
        for (ll i = 0; i < n; i++)
        {
            if (a[i] == -1)
            {
                a[i] = k;
            }
        }
        ma = 0;
        for (ll i = 0; i < n - 1; i++)
        {
            ma = max(ma, abs(a[i] - a[i + 1]));
        }
        cout << ma << " " << k << endl;
    }

    return 0;
}