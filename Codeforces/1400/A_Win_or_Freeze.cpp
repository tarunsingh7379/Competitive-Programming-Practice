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
    ll cnt = 0, prod = 1;
    for (ll i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            cnt++;
            n /= i;
            if (cnt <= 2)
            {
                prod *= i;
            }
        }
    }
    if (n != 1)
    {
        cnt++;
        if (cnt <= 2)
        {
            prod *= n;
        }
    }
    if (cnt == 2)
    {
        cout << 2 << endl;
    }
    else
    {
        if (cnt <= 1)
        {
            cout << 1 << endl;
            cout << 0 << endl;
        }
        else
        {
            cout << 1 << endl;
            cout << prod << endl;
        }
    }

    return 0;
}