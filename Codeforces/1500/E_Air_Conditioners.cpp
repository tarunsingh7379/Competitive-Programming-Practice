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
        ll a[k];
        for (ll i = 0; i < k; i++)
        {
            cin >> a[i];
        }
        ll b[k];
        for (ll i = 0; i < k; i++)
        {
            cin >> b[i];
        }
        vector<ll> ans(n, 1e10);
        for (ll i = 0; i < k; i++)
        {
            ans[a[i] - 1] = b[i];
        }
        vector<ll> left(n, 1e10);
        ll curr_temp = 1e10;
        for (ll i = 0; i < n; i++)
        {
            curr_temp = min(curr_temp + 1, ans[i]);
            left[i] = curr_temp;
        }
        vector<ll> right(n, 1e10);
        curr_temp = 1e10;
        for (ll i = n - 1; i >= 0; i--)
        {
            curr_temp = min(curr_temp + 1, ans[i]);
            right[i] = curr_temp;
        }
        for (ll i = 0; i < n; i++)
        {
            cout << min(left[i], right[i]) << " ";
        }
        cout << endl;
        t--;
    }

    return 0;
}