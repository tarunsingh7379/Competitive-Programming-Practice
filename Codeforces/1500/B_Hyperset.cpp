#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    vector<string> v;
    map<string, int> mp;
    string s;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        v.push_back(s);
    }
    ll ans = 0;
    string x = "";
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            x = "";
            for (int f = 0; f < k; f++)
            {
                if (v[i][f] == v[j][f])
                {
                    x.push_back(v[i][f]);
                }
                else
                {
                    char c = ('S' ^ 'E' ^ 'T' ^ v[i][f] ^ v[j][f]);
                    x.push_back(c);
                }
            }
            ans += mp[x];
        }
        mp[v[i]]++;
    }
    cout << ans << endl;

    return 0;
}