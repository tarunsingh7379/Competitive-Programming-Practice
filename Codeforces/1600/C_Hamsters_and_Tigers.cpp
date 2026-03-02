#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt_h = 0, cnt_t = 0;
    for (auto c : s)
    {
        if (c == 'H')
            cnt_h++;
        else
            cnt_t++;
    }
    s += s;
    int ans = n;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'H')
        {
            int cnt = 0;
            for (int j = i; j < i + cnt_h; j++)
            {
                if (s[j] == 'H')
                {
                    cnt++;
                }
            }
            ans = min(ans, cnt_h - cnt);
        }
        else
        {
            int cnt = 0;
            for (int j = i; j < i + cnt_t; j++)
            {
                if (s[j] == 'T')
                {
                    cnt++;
                }
            }
            ans = min(ans, cnt_t - cnt);
        }
    }
    cout << ans << endl;
    return 0;
}