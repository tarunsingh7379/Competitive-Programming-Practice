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
        if (s == "^")
        {
            cout << 1 << endl;
        }
        else
        {
            int ans = 0;
            if (s[0] == '_')
            {
                ans++;
            }
            for (int i = 0; i < s.size() - 1; i++)
            {
                if (s[i] == s[i + 1] && s[i] == '_')
                {
                    ans++;
                }
            }
            if (s.back() == '_')
            {
                ans++;
            }
            cout << ans << endl;
        }
        t--;
    }

    return 0;
}