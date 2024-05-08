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
        ll n, m, k;
        cin >> n >> m >> k;
        if (k == 1)
        {
            cout << 1 << endl;
        }
        else if (k == 2)
        {
            cout << min(m, n) + max(0LL, (m - n)) / n << endl;
        }
        else if (k == 3)
        {
            cout << max(0LL, m - n - max(0LL, (m - n)) / n) << endl;
        }
        else
        {
            cout << 0 << endl;
        }
        t--;
    }

    return 0;
}