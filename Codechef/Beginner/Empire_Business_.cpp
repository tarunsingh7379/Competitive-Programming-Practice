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
        ll dpl[n], dpr[n];
        dpl[0] = a[0];
        for (ll i = 1; i < n; i++)
        {
            dpl[i] = min(a[i], dpl[i - 1] + 1);
        }
        dpr[n - 1] = a[n - 1];
        for (ll i = n - 2; i >= 0; i--)
        {
            dpr[i] = min(a[i], dpr[i + 1] + 1);
        }
        for (ll i = 0; i < n; i++)
        {
            cout << min(dpl[i], dpr[i]) << " ";
        }
        cout << endl;
        t--;
    }

    return 0;
}