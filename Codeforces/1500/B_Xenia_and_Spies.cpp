#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, s, f;
    cin >> n >> m >> s >> f;
    map<int, pair<int, int>> mp;
    for (int i = 0; i < m; i++)
    {
        int t, l, r;
        cin >> t >> l >> r;
        mp[t] = {l, r};
    }
    string ans;
    bool right = true;
    if (s > f)
    {
        right = false;
    }
    int cur = 1;
    while (s != f)
    {
        int next = (right ? s + 1 : s - 1);
        if (mp.find(cur) != mp.end())
        {
            int l = mp[cur].first, r = mp[cur].second;
            if ((s >= l && s <= r) || (next >= l && next <= r))
            {
                ans.push_back('X');
            }
            else
            {
                ans.push_back(right ? 'R' : 'L');
                s = next;
            }
        }
        else
        {
            ans.push_back(right ? 'R' : 'L');
            s = next;
        }
        cur++;
    }
    cout << ans << endl;

    return 0;
}