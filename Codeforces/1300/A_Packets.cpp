#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    ll ans = 0;
    for (int i = 0; i <= 30; i++)
    {
        n -= (1LL << i);
        ans++;
        if (n <= 0)
        {
            break;
        }
    }
    cout << ans << endl;

    return 0;
}