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
        ll n, r;
        cin >> n >> r;
        ll ans = 0;

        if (n > r)
        {
            ans = (r * (r + 1)) / 2;
        }
        else
        {
            ans = (n * (n - 1)) / 2 + 1;
        }

        cout << ans << endl;
        t--;
    }

    return 0;
}