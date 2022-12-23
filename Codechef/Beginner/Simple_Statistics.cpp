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
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        for (ll i = 0; i < k; i++)
        {
            a[i] = INT_MAX;
        }
        ll i = n - 1;
        ll cnt = 0;
        while (i >= 0)
        {
            if (cnt == k)
            {
                break;
            }
            a[i] = INT_MAX;
            cnt++;

            i--;
        }
        double ans = 0;
        cnt = 0;
        double sum = 0;
        for (ll i = 0; i < n; i++)
        {
            if (a[i] != INT_MAX)
            {
                sum = sum + a[i];
                cnt++;
            }
        }
        ans = sum / cnt;
        cout << fixed << setprecision(12);
        cout << ans << endl;
        t--;
    }

    return 0;
}