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
        int a = 0, b = 0, c = 0;
        if (n % 3 == 0)
        {
            a = n / 3;
        }
        else
        {
            if ((n - 5) % 3 == 0)
            {
                a = (n - 5) / 3;
                b = 1;
            }
            else if ((n - 7) % 3 == 0)
            {
                a = (n - 7) / 3;
                c = 1;
            }
        }
        if (a + b + c > 0)
        {
            cout << a << " " << b << " " << c << endl;
        }
        else
        {
            cout << -1 << endl;
        }
        t--;
    }

    return 0;
}