#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<string> v;
    ll x = 1;
    v.push_back("0");
    for (ll i = 1;; i++)
    {
        string s = to_string(8 * i);
        if (s.size() > 3)
        {
            break;
        }
        v.push_back(s);
    }

    string s;
    cin >> s;
    int flag = 0;
    string ans = "";
    for (auto num : v)
    {
        int j = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (num[j] == s[i])
            {
                j++;
            }
        }
        if (j == num.size())
        {
            ans = num;
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
        cout << ans << endl;
    }
    return 0;
}