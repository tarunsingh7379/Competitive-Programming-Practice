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
        if (k >= 3)
        {
            cout << 0 << endl;
        }
        else
        {
            vector<ll> temp;
            vector<ll> temp2;
            for (ll i = 0; i < n; i++)
            {
                temp.push_back(a[i]);
                for (ll j = i + 1; j < n; j++)
                {
                    temp.push_back(abs(a[j] - a[i]));
                    temp2.push_back(abs(a[j] - a[i]));
                }
            }
            sort(temp.begin(), temp.end());
            if (k == 1)
            {
                cout << temp[0] << endl;
            }
            else
            {
                ll ans = temp[0];
                for (ll i = 0; i < temp2.size(); i++)
                {
                    ll ind = lower_bound(a, a + n, temp2[i]) - a;
                    if (ind < n)
                    {
                        ans = min(ans, abs(temp2[i] - a[ind]));
                    }
                    if (ind - 1 >= 0)
                    {
                        ans = min(ans, abs(temp2[i] - a[ind - 1]));
                    }
                }
                cout << ans << endl;
            }
        }

        t--;
    }

    return 0;
}