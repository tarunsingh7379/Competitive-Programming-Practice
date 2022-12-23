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
        ll n, k;
        cin >> n >> k;
        ll ans = k / (n - 1) * n + k % (n - 1);
        if (k % (n - 1) == 0)
        {
            ans--;
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}