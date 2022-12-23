#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    while (t)
    {
        ll n;
        cin >> n;

        ll x1 = (n * (n + 1)) / 2;

        if (x1 % 2 == 0)
        {
            cout << n << endl;
        }
        else
        {
            cout << n - 1 << endl;
        }

        t--;
    }

    return 0;
}