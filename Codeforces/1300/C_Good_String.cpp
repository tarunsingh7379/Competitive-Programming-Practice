#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll ans = 0;
    string str = "";
    for (ll i = 0; i < n; i++)
    {
        if (ans % 2 == 0)
        {
            if (i % 2 == 0)
            {
                if (i + 1 < n)
                {
                    while (i + 1 < n && s[i] == s[i + 1])
                    {
                        i++;
                        ans++;
                    }
                    if (i + 1 < n)
                        str.push_back(s[i]);
                    else
                        ans++;
                }
                else
                {
                    ans++;
                }
            }
            else
            {
                str.push_back(s[i]);
            }
        }
        else
        {
            if (i % 2 != 0)
            {
                if (i + 1 < n)
                {
                    while (i + 1 < n && s[i] == s[i + 1])
                    {
                        i++;
                        ans++;
                    }
                    if (i + 1 < n)
                        str.push_back(s[i]);
                    else
                        ans++;
                }
                else
                {
                    ans++;
                }
            }
            else
            {
                str.push_back(s[i]);
            }
        }
    }
    cout << ans << endl;
    cout << str << endl;
    return 0;
}