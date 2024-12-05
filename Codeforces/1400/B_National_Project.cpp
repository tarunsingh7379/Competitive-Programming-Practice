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
        ll n, g, b;
        cin >> n >> g >> b;
        ll req = (n + 1) / 2;
        if (n <= g)
        {
            cout << n << endl;
        }
        else
        {
            cout << (req / g) * (g + b) + (req % g != 0 ? req % g : -b) << endl;
        }
        t--;
    }

    return 0;
}