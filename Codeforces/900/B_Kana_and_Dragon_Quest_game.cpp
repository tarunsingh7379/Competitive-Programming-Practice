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
        ll x, n, m;
        cin >> x >> n >> m;
        while (x > 0 && (x / 2) + 10 < x && n > 0)
        {
            x = x / 2 + 10;
            n--;
        }
        if (x > 0)
        {
            x = x - m * 10;
        }
        cout << (x <= 0 ? "YES" : "NO") << endl;
        t--;
    }

    return 0;
}