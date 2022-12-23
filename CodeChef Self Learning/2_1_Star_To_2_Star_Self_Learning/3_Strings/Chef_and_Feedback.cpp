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
        ll n = s.size();
        ll flag = 0;
        for (ll i = 0; i < (n - 2); i++)
        {
            if ((s[i] == '1' && s[i + 1] == '0' && s[i + 2] == '1') || (s[i] == '0' && s[i + 1] == '1' && s[i + 2] == '0'))
            {
                flag = 1;
                break;
            }
        }
        cout << (flag ? "Good" : "Bad") << endl;
        t--;
    }

    return 0;
}