#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

ll func(ll n)
{
    if (n < 10)
    {
        return max(1LL, n);
    }
    return max(1LL * (n % 10) * func(n / 10), 9LL * func(n / 10 - 1));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    cout << func(n) << endl;

    return 0;
}