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
        char c = '0';
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '?')
            {
                s[i] = c;
            }
            c = s[i];
        }
        cout << s << endl;
        t--;
    }

    return 0;
}