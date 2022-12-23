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
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a.begin(), a.end());
        ll cnt = 0, ans = 0;
        for (ll i = 0; i < n; i++)
        {
            cnt++;
            if (a[i] == cnt)
            {
                ans++;
                cnt = 0;
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}