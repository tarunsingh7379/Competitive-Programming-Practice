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
        vector<int> f(10, 0);
        for (auto c : s)
        {
            f[c - '0']++;
        }
        int ma = 0;
        for (int i = 0; i < 10; i++)
        {
            ma = max(ma, f[i]);
        }
        int n = s.size();
        int ans = n - ma;
        vector<string> v;
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                if (j == i)
                {
                    continue;
                }
                string s;
                s.push_back(i + '0');
                s.push_back(j + '0');
                v.push_back(s);
            }
        }
        for (auto num : v)
        {
            int j = 0;
            int cnt = 0;
            for (int i = 0; i < n; i++)
            {
                if (s[i] == num[j])
                {
                    j = (j + 1) % 2;
                    cnt++;
                }
            }
            if (j == 0)
            {
                ans = min(ans, n - cnt);
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}