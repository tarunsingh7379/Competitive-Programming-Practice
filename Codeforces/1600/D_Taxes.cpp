#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

bool check_prime(ll n)
{
    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    if (check_prime(n))
    {
        cout << 1 << endl;
    }
    else if (n % 2 != 0 && !check_prime(n - 2))
    {
        cout << 3 << endl;
    }
    else
    {
        cout << 2 << endl;
    }

    return 0;
}