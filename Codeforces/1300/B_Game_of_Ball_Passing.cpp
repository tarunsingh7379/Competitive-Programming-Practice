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
        int n;
        cin >> n;
        ll a[n];
        ll ma = 0, sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            ma = max(ma, a[i]);
            sum += a[i];
        }
        if (ma == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            ll d = 2 * ma - sum;
            cout << (d > 0 ? d : 1) << endl;
        }

        t--;
    }

    return 0;
}