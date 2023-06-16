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
        ll n, x1, y1, x2, y2;
        cin >> n >> x1 >> y1 >> x2 >> y2;
        cout << abs(min({x1, y1, n + 1 - x1, n + 1 - y1}) - min({x2, y2, n + 1 - x2, n + 1 - y2})) << endl;
        t--;
    }

    return 0;
}