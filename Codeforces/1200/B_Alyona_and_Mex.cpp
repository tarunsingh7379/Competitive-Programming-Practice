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
    sort(a, a + n);
    ll mex = 1;
    for (ll i = 0; i < n; i++)
    {
        if (mex <= a[i])
        {
            mex++;
        }
    }
    cout << mex << endl;

    return 0;
}