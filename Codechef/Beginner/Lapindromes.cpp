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
        if (n % 2 == 0)
        {
            for (ll i = 0; i < n / 2; i++)
            {
                m[s[i]]++;
            }
            for (ll i = n / 2; i < n; i++)
            {
                m[s[i]]--;
            }
        }
        else
        {
            for (ll i = 0; i < n / 2; i++)
            {
                m[s[i]]++;
            }
            for (ll i = n / 2 + 1; i < n; i++)
            {
                m[s[i]]--;
            }
        }
        ll flag = 1;
        for (auto num : m)
        {
            if (num.second != 0)
            {
                flag = 0;
                break;
            }
        }
        cout << (flag ? "YES" : "NO") << endl;
        t--;
    }

    return 0;
}