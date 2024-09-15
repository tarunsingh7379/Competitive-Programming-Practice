#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

bool check(ll n)
{
    for (ll i = 0; i <= 100; i++)
    {
        for (ll j = 0; j <= 1000; j++)
        {
            ll sum = i * 1234567 + j * 123456;
            ll rem = n - sum;
            if (rem >= 0 && rem % 1234 == 0)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;

    cout << (check(n) ? "YES" : "NO") << endl;

    return 0;
}