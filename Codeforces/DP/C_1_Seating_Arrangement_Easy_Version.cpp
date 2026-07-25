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
        int n, table, seat;
        cin >> n >> table >> seat;
        string s;
        cin >> s;
        ll cnt = 0;
        for (auto c : s)
        {
            cnt += (c == 'A');
        }
        ll ans = 0;
        for (ll i = 0; i <= cnt; i++)
        {
            ll cur_ans = 0, table_used = 0, extra = i;
            for (auto c : s)
            {
                if (c == 'I')
                {
                    if (table_used < table)
                    {
                        table_used++;
                        cur_ans++;
                    }
                }
                else if (c == 'E')
                {
                    if (table_used * seat > cur_ans)
                        cur_ans++;
                }
                else
                {
                    if (extra > 0)
                    {
                        if (table_used < table)
                        {
                            table_used++;
                            cur_ans++;
                        }
                    }
                    else
                    {
                        if (table_used * seat > cur_ans)
                            cur_ans++;
                    }
                    extra--;
                }
            }
            ans = max(ans, cur_ans);
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}