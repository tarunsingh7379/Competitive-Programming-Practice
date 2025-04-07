#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    if (n <= 2)
    {
        cout << -1 << endl;
    }
    else if (n == 3)
    {
        cout << 210 << endl;
    }
    else
    {
        int rem = 1;
        for (int i = 2; i <= n; i++)
        {
            rem *= 10;
            rem %= 210;
        }
        int add = (rem ? 210 - rem : 0);
        cout << "1";
        cout << string(n - 4, '0');
        cout << add / 100;
        add %= 100;
        cout << add / 10;
        add %= 10;
        cout << add << endl;
    }

    return 0;
}