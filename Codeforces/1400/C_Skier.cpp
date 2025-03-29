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
        set<pair<pair<int, int>, pair<int, int>>> st;
        pair<int, int> cur = {0, 0};
        int ans = 0;
        for (auto c : s)
        {
            pair<int, int> next = cur;
            if (c == 'N')
            {
                next.first++;
            }
            else if (c == 'S')
            {
                next.first--;
            }
            else if (c == 'E')
            {
                next.second++;
            }
            else
            {
                next.second--;
            }
            if (st.count({cur, next}) || st.count({next, cur}))
            {
                ans++;
            }
            else
            {
                ans += 5;
            }
            st.insert({cur, next});
            cur = next;
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}