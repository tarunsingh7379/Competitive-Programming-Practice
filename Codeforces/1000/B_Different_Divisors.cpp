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
        int d;
        cin >> d;
        int x = 0, y = 0;
        for (int i = d + 1;; i++)
        {
            int flag = 1;
            for (int j = 2; j * j <= i; j++)
            {
                if (i % j == 0)
                {
                    flag = 0;
                    break;
                }
            }
            if (flag)
            {
                x = i;
                break;
            }
        }
        for (int i = x + d;; i++)
        {
            int flag = 1;
            for (int j = 2; j * j <= i; j++)
            {
                if (i % j == 0)
                {
                    flag = 0;
                    break;
                }
            }
            if (flag)
            {
                y = i;
                break;
            }
        }
        cout << min(1LL * x * y, 1LL * x * x * x) << endl;
        t--;
    }

    return 0;
}