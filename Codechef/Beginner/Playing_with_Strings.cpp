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
        string s, r;
        cin >> s >> r;
        ll cnt_0 = 0, cnt_1 = 0;
        for (auto num : s)
        {
            if (num == '1')
            {
                cnt_1++;
            }
            else
            {
                cnt_0++;
            }
        }
        ll x = 0, y = 0;
        for (auto num : r)
        {
            if (num == '1')
            {
                x++;
            }
            else
            {
                y++;
            }
        }
        if (cnt_0 == y && cnt_1 == x)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        t--;
    }

    return 0;
}