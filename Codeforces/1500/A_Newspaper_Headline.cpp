#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string a, b;
    cin >> a >> b;

    vector<int> pos[26];
    for (int i = 0; i < a.size(); i++)
    {
        pos[a[i] - 'a'].push_back(i);
    }
    int ans = 1, cur = -1;
    for (auto c : b)
    {
        int x = c - 'a';
        if (pos[x].empty())
        {
            cout << -1 << endl;
            return 0;
        }
        auto it = upper_bound(pos[x].begin(), pos[x].end(), cur);
        if (it == pos[x].end())
        {
            cur = *pos[x].begin();
            ans++;
        }
        else
        {
            cur = *it;
        }
    }
    cout << ans << endl;

    return 0;
}