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
        ll cnt_2 = 0, cnt_3 = 0;
        while (n > 0 && n % 2 == 0)
        {
            cnt_2++;
            n /= 2;
        }
        while (n > 0 && n % 3 == 0)
        {
            cnt_3++;
            n /= 3;
        }
        if (n != 1)
        {
            cout << -1 << endl;
        }
        else
        {
            if (cnt_2 == cnt_3)
            {
                cout << cnt_2 << endl;
            }
            else if (cnt_2 < cnt_3)
            {
                cout << cnt_3 - cnt_2 + cnt_3 << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
        t--;
    }

    return 0;
}