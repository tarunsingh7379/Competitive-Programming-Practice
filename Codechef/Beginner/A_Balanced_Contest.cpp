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
        ll n, p;
        cin >> n >> p;
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll easy = 0, hard = 0;
        for (ll i = 0; i < n; i++)
        {
            if (a[i] <= p / 10)
            {
                hard++;
            }
            if (a[i] >= p / 2)
            {
                easy++;
            }
        }
        if (easy == 1 && hard == 2)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }

        t--;
    }

    return 0;
}