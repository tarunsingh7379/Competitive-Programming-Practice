#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

/*
a^2 + b^2 + 2ab = n
b^2 + b*(2a) + a^2 - n = 0
*/

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
        int first = -1, second = -1;
        for (int i = 0; i <= 10000; i++)
        {
            int d = 4 * i * i - 4 * (i * i - n);
            if (d >= 0)
            {
                int x = sqrt(d);
                if (x * x != d)
                {
                    continue;
                }
                int a = -2 * i + x;
                if (a >= 0 && a % 2 == 0)
                {
                    first = i;
                    second = a / 2;
                    break;
                }
            }
        }
        if (first == -1)
        {
            cout << first << endl;
        }
        else
        {
            cout << first << " " << second << endl;
        }
        t--;
    }

    return 0;
}