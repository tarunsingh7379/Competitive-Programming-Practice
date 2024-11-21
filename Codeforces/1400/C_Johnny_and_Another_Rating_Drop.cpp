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
        ll cnt = 0, k = n;
        for (ll i = 0; i <= 60; i++)
        {
            if (n & (1LL << i))
            {
                cnt++;
            }
        }
        cout << 2 * k - cnt << endl;
        t--;
    }

    return 0;
}