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
        int n;
        cin >> n;
        int ma = 0, ans = 0;
        for (int i = 1; i < n; i++)
        {
            ll val = gcd(n, i) + i;
            if (val > ma)
            {
                ma = val;
                ans = i;
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}