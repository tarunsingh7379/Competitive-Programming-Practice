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
        int ans = 0, cnt = 0, extra = 0;
        int n = s.size();
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'A')
            {
                if (extra == 0)
                {
                    cnt++;
                }
                else
                {
                    ans++;
                }
            }
            else
            {
                if (cnt == 0)
                {
                    extra = 1;
                }
                ans += cnt;
                cnt = 0;
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}