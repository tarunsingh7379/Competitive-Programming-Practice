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
        string ans(n, '0');
        int prev_val = n;
        for (int i = 0; i <= k; i++)
        {
            string temp = s;
            int can_use = i;
            string cur_ans(n, '0');
            for (int j = 0; j < n && can_use > 0; j++)
            {
                if (temp[j] == '(')
                {
                    can_use--;
                    temp[j] = '*';
                    cur_ans[j] = '1';
                }
            }
            can_use = k - i;
            for (int j = n - 1; j >= 0 && can_use > 0; j--)
            {
                if (temp[j] == ')')
                {
                    can_use--;
                    temp[j] = '*';
                    cur_ans[j] = '1';
                }
            }
            int cur_val = 0, cnt = 0;
            for (int j = 0; j < n; j++)
            {
                if (temp[j] == '(')
                {
                    cnt++;
                }
                else if (temp[j] == ')')
                {
                    if (cnt > 0)
                    {
                        cur_val += 2;
                        cnt--;
                    }
                }
            }
            if (cur_val < prev_val)
            {
                prev_val = cur_val;
                ans = cur_ans;
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}