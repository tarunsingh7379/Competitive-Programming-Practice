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
        ll red = 0, blue = 0, green = 0;
        for (ll i = 0; i < n; i++)
        {
            if (s[i] == 'R')
            {
                red++;
            }
            else if (s[i] == 'B')
            {
                blue++;
            }
            else
            {
                green++;
            }
        }
        ll ans = min(min(blue + green, red + green), red + blue);
        cout << ans << endl;
        t--;
    }

    return 0;
}