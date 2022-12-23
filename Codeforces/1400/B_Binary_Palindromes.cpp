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
        int n;
        cin >> n;
        int ones = 0, odd = 0;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            if (s.size() % 2 != 0)
            {
                odd = 1;
            }
            for (auto c : s)
            {
                if (c == '1')
                {
                    ones++;
                }
            }
        }
        if (ones % 2 == 0)
        {
            cout << n << endl;
        }
        else
        {
            if (odd == 1)
            {
                cout << n << endl;
            }
            else
            {
                cout << n - 1 << endl;
            }
        }
        t--;
    }

    return 0;
}