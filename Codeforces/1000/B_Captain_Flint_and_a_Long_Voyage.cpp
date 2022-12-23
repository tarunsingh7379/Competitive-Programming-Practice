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
        ll n;
        cin >> n;
        ll k = (n + 3) / 4;
        for (ll i = 0; i < (n - k); i++)
        {
            cout << 9;
        }
        for (ll i = 0; i < k; i++)
        {
            cout << 8;
        }
        cout << endl;
        t--;
    }

    return 0;
}