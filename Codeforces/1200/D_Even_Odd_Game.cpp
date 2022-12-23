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

        sort(a.rbegin(), a.rend());
        ll ans = 0;
        for (ll i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                if (a[i] % 2 == 0)
                {
                    ans += a[i];
                }
            }
            else
            {
                if (a[i] % 2 != 0)
                {
                    ans -= a[i];
                }
            }
        }
        if (ans == 0)
        {
            cout << "Tie" << endl;
        }
        else if (ans > 0)
        {
            cout << "Alice" << endl;
        }
        else
        {
            cout << "Bob" << endl;
        }

        t--;
    }

    return 0;
}