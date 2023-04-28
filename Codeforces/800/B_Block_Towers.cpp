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
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a + 1, a + n);
        for (ll i = 1; i < n; i++)
        {
            if (a[i] > a[0])
            {
                ll d = a[i] - a[0];
                a[0] += (d + 1) / 2;
            }
        }
        cout << a[0] << endl;
        t--;
    }

    return 0;
}