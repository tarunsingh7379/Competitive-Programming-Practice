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
    ll cur = 1;
    ll pos = 1, neg = 0;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            cur ^= 1;
        }
        if (cur)
        {
            pos++;
        }
        else
        {
            neg++;
        }
    }
    cout << (pos * neg) << " " << ((n * (n + 1)) / 2 - pos * neg) << endl;
    return 0;
}