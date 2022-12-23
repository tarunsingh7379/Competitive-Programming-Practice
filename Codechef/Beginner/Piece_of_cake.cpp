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
        string s;
        cin >> s;
        map<char, ll> m;
        ll n = s.size();
        for (ll i = 0; i < n; i++)
        {
            m[s[i]]++;
        }
        ll flag = 0;
        for (auto num : m)
        {
            ll x = num.second;
            if ((n - x) == x)
            {
                flag = 1;
                break;
            }
        }
        cout << (flag ? "YES" : "NO") << endl;
        t--;
    }

    return 0;
}