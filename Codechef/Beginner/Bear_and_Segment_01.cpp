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
        ll flag = 1;
        ll i = 0;
        ll cnt = 0;
        while (i < s.size())
        {
            if (s[i] == '1')
            {
                i++;
                cnt++;
                while (i < s.size())
                {

                    if (s[i] == '0')
                    {
                        break;
                    }
                    i++;
                }
            }
            i++;
        }
        if (cnt == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        t--;
    }

    return 0;
}