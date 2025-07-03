#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, k;
    cin >> n >> m >> k;
    vector<string> v;
    set<char> st;
    vector<pair<int, int>> pos;
    vector<pair<int, int>> letters[26];
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
        for (int j = 0; j < m; j++)
        {
            if (s[j] == 'S')
            {
                pos.push_back({i, j});
            }
            else
            {
                letters[s[j] - 'a'].push_back({i, j});
            }
            st.insert(s[j]);
        }
    }
    int len;
    cin >> len;
    string text;
    cin >> text;
    bool ok = true;
    int ans = 0;

    vector<int> can_press(26, 0);
    for (int i = 0; i < 26; i++)
    {
        int check_ok = 0;
        for (auto p : letters[i])
        {
            for (auto q : pos)
            {
                int cost = (p.first - q.first) * (p.first - q.first) + (p.second - q.second) * (p.second - q.second);
                if (cost <= k * k)
                {
                    check_ok = 1;
                    break;
                }
            }
            if (check_ok)
                break;
        }
        can_press[i] = check_ok;
    }

    for (auto c : text)
    {
        if (c >= 'a' && c <= 'z')
        {
            if (letters[c - 'a'].size() == 0)
            {
                ok = false;
                break;
            }
        }
        else
        {
            if (letters[c + ' ' - 'a'].size() == 0)
            {
                ok = false;
                break;
            }
            if (pos.size() == 0)
            {
                ok = false;
                break;
            }
            if (!can_press[c + ' ' - 'a'])
            {
                ans++;
            }
        }
    }
    if (ok)
    {
        cout << ans << endl;
    }
    else
    {
        cout << -1 << endl;
    }
    return 0;
}