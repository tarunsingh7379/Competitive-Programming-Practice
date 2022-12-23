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
        char a = s[0];
        char b = s[1];
        if (a == b)
        {
            cout << "NO" << endl;
        }
        else
        {
            ll flag = 1;
            for (ll i = 0; i < s.size(); i += 2)
            {
                if (s[i] != a)
                {
                    flag = 0;
                    break;
                }
            }
            if (flag == 0)
            {
                cout << "NO" << endl;
            }
            else
            {
                for (ll i = 1; i < s.size(); i += 2)
                {
                    if (s[i] != b)
                    {
                        flag = 0;
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
                }
            }
        }

        t--;
    }

    return 0;
}