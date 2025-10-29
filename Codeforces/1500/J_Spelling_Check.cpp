#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s, t;
    cin >> s >> t;
    int n = s.size(), m = t.size();
    int pref = 0, suff = 0;
    while (pref < m && s[pref] == t[pref])
    {
        pref++;
    }
    while (suff < m && s[n - 1 - suff] == t[m - 1 - suff])
    {
        suff++;
    }
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        if (i <= pref && n - 1 - i <= suff)
        {
            ans.push_back(i + 1);
        }
    }
    if (ans.size())
    {
        cout << ans.size() << endl;
        for (auto num : ans)
        {
            cout << num << " ";
        }
        cout << endl;
    }
    else
    {
        cout << 0 << endl;
    }

    return 0;
}