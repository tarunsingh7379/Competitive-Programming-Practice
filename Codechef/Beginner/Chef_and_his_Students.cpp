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
        for (ll i = 0; i < s.size(); i++)
        {
            if (s[i] == '>')
            {
                s[i] = '<';
            }
            else if (s[i] == '<')
            {
                s[i] = '>';
            }
        }
        ll ans = 0;
        for (ll i = 0; i < (s.size() - 1); i++)
        {
            if (s[i] == '>' && s[i + 1] == '<')
            {
                ans++;
            }
        }

        cout << ans << endl;
        t--;
    }

    return 0;
}