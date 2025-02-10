#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    int n = s.size();
    int ans = n;
    for (int i = 0; i < 26; i++)
    {
        int last = -1;
        int x = 0;
        for (int j = 0; j < n; j++)
        {
            if (s[j] == (i + 'a'))
            {
                if (last == -1)
                {
                    x = max(x, j + 1);
                }
                else
                {
                    x = max(x, j - last);
                }
                last = j;
            }
        }
        if (last != -1)
        {
            x = max(x, n - last);
        }
        if (x != 0)
            ans = min(ans, x);
    }
    cout << ans << endl;
    return 0;
}