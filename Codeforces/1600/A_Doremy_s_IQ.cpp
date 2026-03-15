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
        string ans(n, '0');
        int q = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (a[i] > q)
            {
                if (q < k)
                {
                    q++;
                    ans[i] = '1';
                }
            }
            else
            {
                ans[i] = '1';
            }
        }
        cout << ans << endl;

        t--;
    }

    return 0;
}