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
        ll n, a, b;
        cin >> n >> a >> b;
        ll sum = 0;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            sum += x;
        }
        a += sum;
        if (a % 2 == b % 2)
        {
            cout << "Alice" << endl;
        }
        else
        {
            cout << "Bob" << endl;
        }
        t--;
    }

    return 0;
}