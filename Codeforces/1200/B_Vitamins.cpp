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
    vector<pair<int, string>> v;
    int a = INT_MAX, b = INT_MAX, c = INT_MAX, abc = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        string s;
        cin >> s;
        v.push_back({x, s});
        set<char> st(s.begin(), s.end());
        int cnt = 0;
        if (st.count('A'))
        {
            a = min(a, x);
            cnt++;
        }
        if (st.count('B'))
        {
            b = min(b, x);
            cnt++;
        }
        if (st.count('C'))
        {
            c = min(c, x);
            cnt++;
        }
        if (cnt == 3)
        {
            abc = min(abc, x);
        }
    }
    int ans = INT_MAX;
    if (a != INT_MAX && b != INT_MAX && c != INT_MAX)
    {
        ans = min(ans, a + b + c);
    }
    if (abc != INT_MAX)
    {
        ans = min(ans, abc);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int x = 0, y = 0, z = 0;
            for (auto c : v[i].second)
            {
                if (c == 'A')
                {
                    x++;
                }
                else if (c == 'B')
                {
                    y++;
                }
                else
                {
                    z++;
                }
            }
            for (auto c : v[j].second)
            {
                if (c == 'A')
                {
                    x++;
                }
                else if (c == 'B')
                {
                    y++;
                }
                else
                {
                    z++;
                }
            }
            if (x > 0 && y > 0 && z > 0)
            {
                ans = min(ans, v[i].first + v[j].first);
            }
        }
    }
    if (ans == INT_MAX)
    {
        ans = -1;
    }
    cout << ans << endl;
    return 0;
}