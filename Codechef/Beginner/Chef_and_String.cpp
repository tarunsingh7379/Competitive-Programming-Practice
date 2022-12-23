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
        ll ans = 0;
        ll i = 0;
        while (i < (s.size() - 1))
        {
            if (s[i] != s[i + 1])
            {
                ans++;
                i += 2;
            }
            else
            {
                i++;
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}