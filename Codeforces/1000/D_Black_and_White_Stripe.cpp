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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int w = 0;
        for (int i = 0; i < k; i++)
        {
            if (s[i] == 'W')
            {
                w++;
            }
        }
        int ans = w;

        for (int i = k; i < n; i++)
        {
            if (s[i] == 'W')
            {
                w++;
            }

            if (s[i - k] == 'W')
            {
                w--;
            }

            ans = min(ans, w);
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}