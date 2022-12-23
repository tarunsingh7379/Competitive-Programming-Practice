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
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            string s;
            cin >> s;
            for (auto c : s)
            {
                if (c == 'D')
                {
                    a[i] = (a[i] + 1) % 10;
                }
                else
                {
                    a[i] = (a[i] - 1 + 10) % 10;
                }
            }
        }
        for (ll i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
        t--;
    }

    return 0;
}