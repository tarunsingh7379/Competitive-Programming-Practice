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
        int ans = s.size();
        for (char c = 'a'; c <= 'z'; c++)
        {
            int cnt = 0, temp = 0;
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] == c)
                {
                    temp = max(temp, cnt);
                    cnt = 0;
                }
                else
                {
                    cnt++;
                }
            }
            temp = max(temp, cnt);
            cnt = 0;
            while (temp)
            {
                temp /= 2;
                cnt++;
            }
            ans = min(ans, cnt);
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}