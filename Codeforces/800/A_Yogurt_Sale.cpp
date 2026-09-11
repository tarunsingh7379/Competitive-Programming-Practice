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
        int n, a, b;
        cin >> n >> a >> b;
        int ans = min(n * a, n / 2 * b + (n & 1 ? a : 0));
        cout << ans << endl;
        t--;
    }

    return 0;
}