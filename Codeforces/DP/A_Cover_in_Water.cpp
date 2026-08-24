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
        int ans = 0, cnt = 0;
        bool is_present = false;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '.')
            {
                cnt++;
            }
            else
            {
                if (cnt >= 3)
                    is_present = true;
                ans += min(cnt, 2);
                cnt = 0;
            }
        }
        if (cnt)
        {
            if (cnt >= 3)
                is_present = true;
            ans += min(cnt, 2);
        }
        if (is_present)
        {
            ans = 2;
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}