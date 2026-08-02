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
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll ans = a[0];
        ll cur = a[0];
        ll l = 0, ans_l = 0;
        for (ll i = 1; i < n; i++)
        {
            cur += a[i];
            if (a[i] < cur)
            {
                cur = a[i];
                l = i;
            }
            if (cur < ans)
            {
                ans = cur;
                ans_l = l;
            }
        }
        ll sum = 0;
        for (ll i = 0; i < ans_l; i++)
        {
            sum += a[i];
        }
        cout << sum << endl;
        t--;
    }

    return 0;
}