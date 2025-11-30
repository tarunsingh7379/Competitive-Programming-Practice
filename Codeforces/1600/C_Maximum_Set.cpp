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
        ll l, r;
        cin >> l >> r;
        ll ma = 1;
        ll x = l;
        while ((x * 2) <= r)
        {
            x *= 2;
            ma++;
        }
        ll cnt = (r / (1LL << (ma - 1))) - l + 1;
        if (ma > 1)
        {
            cnt += (ma - 1) * (max(0LL, (r / ((1LL << (ma - 2)) * 3)) - l + 1));
        }
        cout << ma << " " << cnt << endl;
        t--;
    }

    return 0;
}