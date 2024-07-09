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
    ll cnt = 0;
    for (ll i = 2; i * i <= n; i++)
    {
        cnt = 0;
        while (n % i == 0)
        {
            n /= i;
            cnt++;
        }
        if (cnt != 0)
        {
            n *= i;
        }
    }
    cout << n << endl;

    return 0;
}