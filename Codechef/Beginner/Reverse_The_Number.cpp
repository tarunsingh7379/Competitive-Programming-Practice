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
        reverse(s.begin(), s.end());
        ll i = 0;
        while (s.size() > 0)
        {
            if (s[i] == '0')
            {
                s.erase(s.begin() + i);
            }
            else
            {
                break;
            }
        }
        cout << s << endl;
        t--;
    }

    return 0;
}