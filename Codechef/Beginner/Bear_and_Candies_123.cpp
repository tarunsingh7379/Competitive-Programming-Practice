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
        ll a, b;
        cin >> a >> b;
        ll flag = 1;
        ll cnt = 1;
        while (1)
        {
            if (flag == 1)
            {
                a = a - cnt;
                if (a < 0)
                {
                    break;
                }
                cnt++;
                flag = 0;
            }
            else
            {
                b = b - cnt;
                if (b < 0)
                {
                    break;
                }
                cnt++;
                flag = 1;
            }
        }
        if (a < 0)
        {
            cout << "Bob" << endl;
        }
        else
        {
            cout << "Limak" << endl;
        }
        t--;
    }

    return 0;
}