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
        ll a[2 * n];
        for (ll i = 0; i < 2 * n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + 2 * n);
        reverse(a, a + 2 * n);
        ll missing_number = 0;
        for (ll i = 0; i <= n; i++)
        {
            missing_number += a[i];
        }
        for (ll i = n + 1; i < 2 * n; i++)
        {
            missing_number -= a[i];
        }
        vector<ll> ans(2 * n + 1, 0);
        for (ll i = 0; i <= n; i++)
        {
            ans[2 * i] = a[i];
        }
        for (ll i = 0; i < n - 1; i++)
        {
            ans[2 * i + 1] = a[n + i + 1];
        }
        ans[2 * n - 1] = missing_number;
        for (auto num : ans)
        {
            cout << num << " ";
        }
        cout << endl;

        t--;
    }

    return 0;
}