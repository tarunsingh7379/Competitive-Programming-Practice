#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    map<string, string> mp;
    for (int i = 0; i < m; i++)
    {
        string a, b;
        cin >> a >> b;
        mp[a] = b;
    }

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if (s.size() <= mp[s].size())
        {
            cout << s << " ";
        }
        else
        {
            cout << mp[s] << " ";
        }
    }

    return 0;
}