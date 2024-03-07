#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, k;
    cin >> n >> k;

    if (k == n || k == 0)
    {
        cout << 0 << " " << 0 << endl;
    }
    else
    {
        cout << 1 << " " << min(n - k, 2 * k) << endl;
    }

    return 0;
}