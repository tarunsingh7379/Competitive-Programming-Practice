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
        ll cnt_1 = 0, cnt_0 = 0;
        for (ll i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
            {
                cnt_1++;
            }
            else
            {
                cnt_0++;
            }
        }

        if (cnt_1 == 1 || cnt_0 == 1)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }

        t--;
    }

    return 0;
}