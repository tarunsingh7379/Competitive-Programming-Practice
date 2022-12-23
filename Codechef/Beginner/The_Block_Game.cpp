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
        ll l = 0, r = s.size() - 1;
        ll flag = 1;
        while (l < r)
        {
            if (s[l] != s[r])
            {
                flag = 0;
                break;
            }
            l++;
            r--;
        }
        cout << (flag ? "wins" : "loses") << endl;
        t--;
    }

    return 0;
}