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
        for (char i = '1'; i <= '8'; i++)
        {
            if (s[1] != i)
            {
                cout << s[0] << i << endl;
            }
        }
        for (char i = 'a'; i <= 'h'; i++)
        {
            if (s[0] != i)
            {
                cout << i << s[1] << endl;
            }
        }
        t--;
    }

    return 0;
}