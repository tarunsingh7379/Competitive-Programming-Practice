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
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        vector<ll> b(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        if (a == b)
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