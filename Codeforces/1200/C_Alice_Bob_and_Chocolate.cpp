#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll l = 0, r = n - 1;
    ll alice = a[l], bob = a[r];
    while (l < r)
    {
        if (alice >= bob)
        {
            alice -= bob;
            r--;
            if (r > l)
            {
                bob += a[r];
            }
        }
        else
        {
            bob -= alice;
            l++;
            if (l < r)
            {
                alice += a[l];
            }
        }
    }
    cout << l << " " << r << endl;
    cout << (l + 1) << " " << n - 1 - r << endl;

    return 0;
}