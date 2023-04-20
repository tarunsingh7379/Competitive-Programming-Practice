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
        int x = 0;
        for (int i = 0; i < n; i++)
        {
            int y;
            cin >> y;
            x ^= y;
        }
        if (n % 2 != 0)
        {
            cout << x << endl;
        }
        else
        {
            if (x == 0)
            {
                cout << 0 << endl;
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