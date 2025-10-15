#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

ll func(ll n, ll k)
{
    if (k <= (n + 1) / 2)
    {
        return 2 * k - 1;
    }
    return 2 * func(n / 2, k - (n + 1) / 2);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t)
    {
        ll n, k;
        cin >> n >> k;
        cout << func(n, k) << endl;
        t--;
    }

    return 0;
}