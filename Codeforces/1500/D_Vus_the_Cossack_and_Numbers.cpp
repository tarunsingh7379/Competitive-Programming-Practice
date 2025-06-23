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
    ll a[n], b[n];
    ll sum = 0;
    vector<ll> flag(n, 0);
    for (ll i = 0; i < n; i++)
    {
        double x;
        cin >> x;
        a[i] = ll(floor(x));
        if (floor(x) == x)
            flag[i] = 1;
        sum += a[i];
    }
    sum = -sum;
    for (ll i = 0; i < n && sum > 0; i++)
    {
        if (!flag[i])
        {
            sum--;
            a[i]++;
        }
    }
    for (ll i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }

    return 0;
}