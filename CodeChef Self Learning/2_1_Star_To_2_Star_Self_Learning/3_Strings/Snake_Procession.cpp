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
        string s;
        cin >> s;
        string x;
        for (ll i = 0; i < n; i++)
        {
            if (s[i] != '.')
            {
                x.push_back(s[i]);
            }
        }
        ll flag = 1;
        if (x.size() % 2 != 0)
        {
            flag = 0;
        }
        else if (x.size() > 0)
        {
            for (ll i = 0; i < (x.size() - 1); i += 2)
            {
                if (x[i] == 'H' && x[i + 1] == 'T')
                {
                }
                else
                {
                    flag = 0;
                    break;
                }
            }
        }

        cout << (flag ? "Valid" : "Invalid") << endl;
        t--;
    }

    return 0;
}