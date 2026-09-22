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
        int a, b, c;
        cin >> a >> b >> c;
        int d = abs(a - b);
        int ans = ((d + 2 * c - 1) / (2 * c));
        cout << ans << endl;
        t--;
    }

    return 0;
}