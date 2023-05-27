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
        int ans = 0, cnt = 1;
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == s[i + 1])
            {
                cnt++;
            }
            else
            {
                ans = max(ans, cnt);
                cnt = 1;
            }
        }
        ans = max(ans, cnt);
        ans++;
        cout << ans << endl;
        t--;
    }

    return 0;
}