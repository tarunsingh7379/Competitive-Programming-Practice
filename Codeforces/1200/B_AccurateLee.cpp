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

        ll one = 0, zero = 0;
        ll pos1 = -1, pos2 = -1;
        for (ll i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                zero++;
            }
            else
            {
                pos1 = i;
                break;
            }
        }
        for (ll i = n - 1; i >= 0; i--)
        {
            if (s[i] == '1')
            {
                one++;
            }
            else
            {
                pos2 = i;
                break;
            }
        }
        string ans(zero, '0');
        if (pos1 != -1 && pos2 != -1 && pos1 < pos2)
        {
            ans += "0";
        }
        ans += string(one, '1');
        cout << ans << endl;
        t--;
    }

    return 0;
}