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
        for (ll i = 0; i < s.size(); i += 2)
        {
            if (s[i] == s[i + 1])
            {
                flag = 0;
                break;
            }
        }
        cout << (flag ? "yes" : "no") << endl;
        t--;
    }

    return 0;
}