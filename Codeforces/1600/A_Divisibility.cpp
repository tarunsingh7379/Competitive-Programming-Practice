#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll k, a, b;
    cin >> k >> a >> b;
    ll ans = 0;
    if ((a >= 0 && b >= 0) || (a <= 0 && b <= 0))
    {
        a = abs(a);
        b = abs(b);
        if (a > b)
            swap(a, b);
        ans = b / k;
        if (a != 0)
        {
            ans -= (a - 1) / k;
        }
        else
        {
            ans++;
        }
    }
    else
    {
        a = abs(a);
        b = abs(b);
        ans = b / k + a / k + 1;
    }
    cout << ans << endl;

    return 0;
}