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
        ll n, s, m;
        cin >> n >> s >> m;
        ll prev = 0, ma = 0;
        for (int i = 0; i < n; i++)
        {
            int x, y;
            cin >> x >> y;
            ma = max(ma, x - prev);
            prev = y;
        }
        ma = max(ma, m - prev);
        cout << (ma >= s ? "YES" : "NO") << endl;
        t--;
    }

    return 0;
}