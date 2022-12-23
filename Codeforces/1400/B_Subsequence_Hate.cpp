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
        int n = s.size();
        int cnt0 = 0, cnt1 = 0;
        for (auto c : s)
        {
            if (c == '0')
            {
                cnt0++;
            }
            else
            {
                cnt1++;
            }
        }
        int ans = cnt0, got0 = 0, got1 = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                got0++;
                cnt0--;
            }
            else
            {
                got1++;
                cnt1--;
            }
            int cost1 = got1 + cnt0;
            int cost2 = got0 + cnt1;
            ans = min({ans, cost1, cost2});
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}