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
        ll sum[n + 1];
        for (ll i = n - k + 1; i <= n; i++)
        {
            cin >> sum[i];
        }
        if (k == 1)
        {
            cout << "Yes" << endl;
        }
        else
        {
            vector<ll> a(n + 1);
            for (ll i = n - k + 2; i <= n; i++)
            {
                a[i] = sum[i] - sum[i - 1];
            }
            if (!is_sorted(a.begin() + n - k + 2, a.end()))
            {
                cout << "No" << endl;
            }
            else
            {
                if (a[n - k + 2] * (n - k + 1) < sum[n - k + 1])
                {
                    cout << "No" << endl;
                }
                else
                {
                    cout << "Yes" << endl;
                }
            }
        }

        t--;
    }

    return 0;
}