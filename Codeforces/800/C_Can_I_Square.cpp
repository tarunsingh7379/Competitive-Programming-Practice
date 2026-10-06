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
        ll sum = 0;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            sum += x;
        }
        ll d = sqrtl(sum);
        if (d * d == sum)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        t--;
    }

    return 0;
}