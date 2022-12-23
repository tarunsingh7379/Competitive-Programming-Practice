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
        ll x, m, d;
        cin >> x >> m >> d;
        cout << min(x * m, x + d) << endl;
        t--;
    }

    return 0;
}