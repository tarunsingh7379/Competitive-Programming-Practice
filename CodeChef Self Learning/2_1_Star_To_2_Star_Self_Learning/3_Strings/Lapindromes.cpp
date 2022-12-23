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
        map<char, ll> mp1, mp2;
        ll n = s.size();
        ll l = 0, r = n - 1;
        while (l < r)
        {
            mp1[s[l]]++;
            mp2[s[r]]++;
            l++;
            r--;
        }
        ll flag = 1;
        if (mp1.size() != mp2.size())
        {
            flag = 0;
        }
        else
        {
            for (auto num : mp1)
            {
                if (num.second != mp2[num.first])
                {
                    flag = 0;
                    break;
                }
            }
        }
        cout << (flag ? "YES" : "NO") << endl;
        t--;
    }

    return 0;
}