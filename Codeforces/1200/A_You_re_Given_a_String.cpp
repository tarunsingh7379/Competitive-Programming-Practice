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
    map<string, int> mp;
    for (int i = 0; i < n; i++)
    {
        string x;
        for (int j = i; j < n; j++)
        {
            x.push_back(s[j]);
            mp[x]++;
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        string x;
        for (int j = i; j < n; j++)
        {
            x.push_back(s[j]);
            if (mp[x] >= 2)
            {
                ans = max(ans, (int)x.size());
            }
        }
    }
    cout << ans << endl;

    return 0;
}