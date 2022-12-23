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
        int l = 0, r = k - 1;
        int ans = 0;
        while (l <= r)
        {
            vector<int> f1(26, 0), f2(26, 0);
            int cnt = 0;
            for (int i = l; i < n; i += k)
            {
                f1[s[i] - 'a']++;
                cnt++;
            }
            for (int i = r; i < n; i += k)
            {
                f2[s[i] - 'a']++;
            }
            int cost = INT_MAX;
            for (int i = 0; i < 26; i++)
            {
                if (l == r)
                {
                    cost = min(cost, cnt - f1[i]);
                }
                else
                {
                    cost = min(cost, (cnt - f1[i]) + (cnt - f2[i]));
                }
            }
            ans = ans + cost;
            l++;
            r--;
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}