#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m;
    cin >> n >> m;

    cout << max(0LL, n - 2 * m) << " ";

    ll node = 1;
    while (m > 0)
    {
        m -= min(node, m);
        node++;
    }
    if (node == 1)
    {
        cout << n << endl;
    }
    else
        cout << n - node << endl;

    return 0;
}