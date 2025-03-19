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
        vector<int> v;
        v.push_back(-1);
        for (char c = 'z'; c >= 'a'; c--)
        {
            for (int i = v.back() + 1; i < n; i++)
            {
                if (s[i] == c)
                {
                    v.push_back(i);
                }
            }
        }
        v.erase(v.begin());
        int cnt = 0;
        for (auto c : s)
        {
            if (c == s[v[0]])
            {
                cnt++;
            }
        }
        int l = 0, r = v.size() - 1;
        while (l < r)
        {
            swap(s[v[l]], s[v[r]]);
            l++;
            r--;
        }
        if (is_sorted(s.begin(), s.end()))
        {
            cout << v.size() - cnt << endl;
        }
        else
        {
            cout << -1 << endl;
        }
        t--;
    }

    return 0;
}