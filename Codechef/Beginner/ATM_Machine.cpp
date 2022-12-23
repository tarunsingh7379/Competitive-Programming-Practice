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

        string ans;
        for (ll i = 0; i < n; i++)
        {
            ll rem = k - a[i];
            if (rem >= 0)
            {
                ans.push_back('1');
                k = rem;
            }
            else
            {
                ans.push_back('0');
            }
        }
        cout << ans << endl;

        t--;
    }

    return 0;
}