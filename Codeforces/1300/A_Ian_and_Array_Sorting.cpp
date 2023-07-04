#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
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
        for (ll i = n - 2; i > 0; i--)
        {
            if (a[i] > a[i + 1])
            {
                ll d = a[i] - a[i + 1];
                a[i] = a[i + 1];
                a[i - 1] -= d;
            }
        }
        if (a[0] <= a[1])
        {
            cout << "YES" << endl;
        }
        else
        {
            for (ll i = 1; i < n - 1; i++)
            {
                if (a[i] < a[i - 1])
                {
                    ll d = a[i - 1] - a[i];
                    a[i] = a[i - 1];
                    a[i + 1] += d;
                }
            }
            if (a[n - 1] >= a[n - 2])
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        t--;
    }

    return 0;
}