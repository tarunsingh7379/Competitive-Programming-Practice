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
        string s;
        cin >> s;
        ll ans = 1;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '?')
            {
                if (i == 0)
                {
                    ans *= 9;
                }
                else
                {
                    ans *= 10;
                }
            }
        }
        if (s[0] == '0')
        {
            ans = 0;
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}