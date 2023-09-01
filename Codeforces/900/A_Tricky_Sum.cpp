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
        ll sum = n * (n + 1) / 2;
        ll cnt = 0;
        while (n)
        {
            n /= 2;
            cnt++;
        }
        for (ll i = 0; i < cnt; i++)
        {
            sum -= 2 * (1LL << i);
        }
        cout << sum << endl;
        t--;
    }

    return 0;
}