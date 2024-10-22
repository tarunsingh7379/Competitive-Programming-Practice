#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c, d;
    cin >> a >> b >> c >> d;
    for (int k = 1; k <= 200; k++)
    {
        for (int j = k + 1; j <= 200; j++)
        {
            for (int i = j + 1; i <= 200; i++)
            {
                if (i >= a && i <= 2 * a && j >= b && j <= 2 * b && k >= c && k <= 2 * c &&
                    i >= d && i > 2 * d && j >= d && j > 2 * d && k >= d && k <= 2 * d)
                {
                    cout << i << endl;
                    cout << j << endl;
                    cout << k << endl;
                    return 0;
                }
            }
        }
    }
    cout << -1 << endl;
    return 0;
}