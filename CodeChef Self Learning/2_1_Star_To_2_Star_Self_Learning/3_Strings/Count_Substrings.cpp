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
        string s;
        cin >> s;
        ll cnt = 0;
        for (ll i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                cnt++;
            }
        }
        ll ans = (cnt * (cnt + 1)) / 2;
        cout << ans << endl;
        t--;
    }

    return 0;
}