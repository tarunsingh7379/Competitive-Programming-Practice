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
        ll p;
        cin >> p;
        string temp = s;
        sort(temp.begin(), temp.end());
        reverse(temp.begin(), temp.end());
        ll cost = 0;
        for (ll i = 0; i < temp.size(); i++)
        {
            cost = cost + (temp[i] - 'a') + 1;
        }
        ll ind = -1;
        for (ll i = 0; i < temp.size(); i++)
        {
            if (cost > p)
            {
                cost = cost - ((temp[i] - 'a') + 1);
            }
            else
            {
                ind = i;
                break;
            }
        }
        string ans = "";
        if (ind == -1)
        {
            cout << ans << endl;
        }
        else
        {
            map<char, ll> mp;
            for (ll i = ind; i < temp.size(); i++)
            {
                mp[temp[i]]++;
            }
            for (ll i = 0; i < s.size(); i++)
            {
                if (mp[s[i]])
                {
                    ans.push_back(s[i]);
                    mp[s[i]]--;
                }
            }
            cout << ans << endl;
        }
        t--;
    }

    return 0;
}