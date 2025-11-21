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
        ll x, y;
        cin >> x >> y;
        if (x == y)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << (1LL << 50) - max(x, y) << endl;
        }
        t--;
    }

    return 0;
}