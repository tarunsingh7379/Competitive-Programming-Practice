#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, a, b;
    cin >> n >> m >> a >> b;

    int ans = n * a;
    for (int i = 1; i <= (n + m - 1) / m; i++)
    {
        int cost = b * i;
        int rem_cost = max(0, n - i * m) * a;
        ans = min(ans, cost + rem_cost);
    }

    cout << ans << endl;

    return 0;
}