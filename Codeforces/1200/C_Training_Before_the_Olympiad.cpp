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
        ll odd = 0, sum = 0;
        for (ll i = 0; i < n; i++)
        {
            if (a[i] & 1)
            {
                odd++;
            }
            sum += a[i];
            if (odd % 3 == 0)
            {
                cout << sum - odd / 3 << " ";
            }
            else if (odd % 3 == 1)
            {
                if (i == 0)
                {
                    cout << sum << " ";
                }
                else
                    cout << sum - odd / 3 - 1 << " ";
            }
            else
            {
                cout << sum - odd / 3 << " ";
            }
        }
        cout << endl;
        t--;
    }

    return 0;
}