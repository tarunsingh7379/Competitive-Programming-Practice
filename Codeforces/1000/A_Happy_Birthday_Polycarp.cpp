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
        ll ans = 0;
        for (ll d = 1; d <= 9; d++)
        {
            string s(d, '1');
            ll x = stoi(s);
            for (ll i = 1; i <= 9; i++)
            {
                if (x * i <= n)
                {
                    ans++;
                }
                else
                {
                    break;
                }
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}