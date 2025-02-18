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

        vector<int> pos;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '*')
            {
                pos.push_back(i);
            }
        }

        ll k = pos.size();
        ll ans = 0;
        if (k > 0)
        {
            for (int i = 0; i < k; i++)
            {
                pos[i] -= i;
            }
            sort(pos.begin(), pos.end());
            ll ind = pos[k / 2];
            for (auto num : pos)
            {
                ans += abs(num - ind);
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}