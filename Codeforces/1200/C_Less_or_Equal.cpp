#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, k;
    cin >> n >> k;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a + n);

    if (k == 0)
    {
        if (a[0] != 1)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    else if (k == n)
    {
        cout << a[n - 1] << endl;
    }
    else
    {
        if (a[k - 1] == a[k])
        {
            cout << -1 << endl;
        }
        else
        {
            cout << a[k - 1] << endl;
        }
    }

    return 0;
}