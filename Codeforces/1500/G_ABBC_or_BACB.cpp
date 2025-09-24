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
        int ans = 0, cnt = 0, mi = INT_MAX;
        int n = s.size();
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'A')
            {
                cnt++;
                ans++;
            }
            else
            {
                mi = min(mi, cnt);
                cnt = 0;
            }
        }
        mi = min(mi, cnt);
        cout << ans - mi << endl;
        t--;
    }

    return 0;
}