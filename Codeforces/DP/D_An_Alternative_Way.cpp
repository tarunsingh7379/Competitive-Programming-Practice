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
        ll a[n], b[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (ll i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        for (ll i = n - 1; i > 0; i--)
        {
            if (a[i] > b[i])
            {
                ll d = a[i] - b[i];
                a[i - 1] += d;
            }
        }
        cout << (a[0] <= b[0] ? "YES" : "NO") << endl;
        t--;
    }

    return 0;
}