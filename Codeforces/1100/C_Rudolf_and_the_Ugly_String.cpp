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
        string s;
        cin >> s;
        int ans = 0;
        for (int i = 0; i <= n - 3; i++)
        {
            if (s.substr(i, 3) == "pie")
            {
                ans++;
            }
            else if (s.substr(i, 3) == "map")
            {
                if (i + 4 < n && s.substr(i, 5) == "mapie")
                {
                    i += 4;
                }
                ans++;
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}