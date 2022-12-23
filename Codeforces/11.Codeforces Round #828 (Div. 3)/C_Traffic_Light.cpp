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
        int n;
        cin >> n;
        char c;
        cin >> c;
        string s;
        cin >> s;
        s = s + s;
        int ans = 0;
        int i = 0;
        while (i < n)
        {
            if (s[i] == c)
            {
                int st = i;
                while (i < 2 * n)
                {
                    if (s[i] == 'g')
                    {
                        ans = max(ans, i - st);
                        break;
                    }
                    i++;
                }
            }
            i++;
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}