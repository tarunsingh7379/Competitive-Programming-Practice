#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll k, x;
    cin >> k >> x;
    ll cnt = 0;
    while (x % k == 0)
    {
        x /= k;
        cnt++;
    }
    if (x == 1)
    {
        cout << "YES" << endl;
        cout << cnt - 1 << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}