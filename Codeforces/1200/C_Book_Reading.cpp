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
        ll n, m;
        cin >> n >> m;
        ll sum = 0;
        for (ll i = 1; i <= 10; i++)
        {
            sum = sum + (m * i) % 10;
        }
        ll ans = (n / (10 * m)) * sum;
        ll rem = n % (10 * m);
        for (ll i = 1; i <= 10 && (m * i) <= rem; i++)
        {
            ans = ans + (m * i) % 10;
        }
        cout << ans << endl;

        t--;
    }

    return 0;
}