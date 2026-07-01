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
        int ans = 1, extra = 0;
        for (int i = 1; i < s.size(); i++)
        {
            if (s[i] != s[i - 1])
            {
                ans++;
            }
            if (s[i] == '1' && s[i - 1] == '0')
            {
                extra = 1;
            }
        }
        ans -= extra;
        cout << ans << endl;
        t--;
    }

    return 0;
}