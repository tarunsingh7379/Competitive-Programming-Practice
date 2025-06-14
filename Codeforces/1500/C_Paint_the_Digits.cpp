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
        vector<int> ans(n, 0);
        bool res = false;
        for (int d = 0; d <= 9; d++)
        {
            vector<pair<int, int>> cur1, cur2;
            int l = 0, r = d;
            bool ok = true;
            for (int i = 0; i < n; i++)
            {
                if ((s[i] - '0') >= r)
                {
                    cur2.push_back({s[i] - '0', i});
                    r = (s[i] - '0');
                }
                else if ((s[i] - '0') >= l)
                {
                    cur1.push_back({s[i] - '0', i});
                    l = (s[i] - '0');
                }
                else
                {
                    ok = false;
                    break;
                }
            }
            if (ok && l <= d)
            {
                for (auto num : cur1)
                {
                    ans[num.second] = 1;
                }
                for (auto num : cur2)
                {
                    ans[num.second] = 2;
                }
                for (auto num : ans)
                {
                    cout << num;
                }
                cout << endl;
                res = true;
                break;
            }
        }
        if (!res)
        {
            cout << "-" << endl;
        }
        t--;
    }

    return 0;
}