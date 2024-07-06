#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    int n = s.size();
    vector<int> prefix(n, 0), suffix(n, 0);
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (i != 0)
            prefix[i] = prefix[i - 1];
        if (s[i] == 'v')
        {
            cnt++;
        }
        else
        {
            if (cnt > 1)
                prefix[i] += (cnt - 1);
            cnt = 0;
        }
    }
    cnt = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (i != n - 1)
            suffix[i] = suffix[i + 1];
        if (s[i] == 'v')
        {
            cnt++;
        }
        else
        {
            if (cnt > 1)
                suffix[i] += (cnt - 1);
            cnt = 0;
        }
    }
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'o')
        {
            ans = ans + 1LL * prefix[i] * suffix[i];
        }
    }
    cout << ans << endl;

    return 0;
}