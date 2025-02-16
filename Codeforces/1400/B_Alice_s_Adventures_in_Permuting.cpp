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
        ll n, b, c;
        cin >> n >> b >> c;
        if (b == 0)
        {
            if (c >= n)
            {
                cout << n << endl;
            }
            else if (c == n - 1 || c == n - 2)
            {
                cout << n - 1 << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
        else
        {
            if (c >= n)
            {
                cout << n << endl;
            }
            else
            {
                ll ind = (n - 1 + b - c) / b;
                cout << (n - ind) << endl;
            }
        }
        t--;
    }

    return 0;
}