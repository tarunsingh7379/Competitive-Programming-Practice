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
        ll x = 3 * n;
        if (x % 9 == 0)
        {
            cout << 6;
            for (ll i = 0; i < (n - 1); i++)
            {
                cout << 3;
            }
            cout << endl;
        }
        else
        {
            for (ll i = 0; i < n; i++)
            {
                cout << 3;
            }
            cout << endl;
        }
        t--;
    }

    return 0;
}