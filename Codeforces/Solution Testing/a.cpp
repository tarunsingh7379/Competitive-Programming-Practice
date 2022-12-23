#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string a, s;
    cin >> a >> s;
    string ans;

    ll i = a.size() - 1, j = s.size() - 1;
    ll flag = 1;
    while (i >= 0 && j >= 0)
    {
        ll x, y;
        x = a[i] - '0';
        y = s[j] - '0';
        if (x <= y)
        {
            ll z = y - x;
            ans.push_back(z + '0');
            i--;
            j--;
        }
        else
        {

            j--;
            if (s[j] == '0')
            {
                flag = 0;
                break;
            }

            if (j >= 0)
            {
                y = y + 10 * (s[j] - '0');
                ll z = y - x;
                if (z <= 9)
                {
                    ans.push_back(z + '0');
                    i--;
                    j--;
                }
                else
                {
                    flag = 0;
                    break;
                }
            }
            else
            {
                flag = 0;
                break;
            }
        }
    }
    if (i >= 0)
    {
        flag = 0;
    }
    while (j >= 0)
    {
        ans.push_back(s[j]);
        j--;
    }
    if (flag == 1)
    {
        reverse(ans.begin(), ans.end());

        while (ans[0] == '0')
        {
            ans.erase(ans.begin() + 0);
        }
        cout << ans << endl;
    }
    else
    {
        cout << -1 << endl;
    }

    return 0;
}