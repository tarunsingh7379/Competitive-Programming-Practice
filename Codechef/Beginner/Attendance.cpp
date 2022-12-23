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
        ll n;
        cin >> n;
        map<string, ll> mp;
        vector<pair<string, string>> v;
        for (ll i = 0; i < n; i++)
        {
            string f, l;
            cin >> f >> l;
            v.push_back({f, l});
            mp[f]++;
        }
        for (ll i = 0; i < n; i++)
        {
            if (mp[v[i].first] > 1)
            {
                cout << v[i].first << " " << v[i].second << endl;
            }
            else
            {
                cout << v[i].first << endl;
            }
        }
        t--;
    }

    return 0;
}