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
        int a, b;
        cin >> a >> b;
        int screens = b / 2;
        int available = screens * 7;
        if (b & 1)
        {
            screens++;
            available += 11;
        }
        if (a > available)
        {
            int d = a - available;
            screens += ((d + 14) / 15);
        }
        cout << screens << endl;
        t--;
    }

    return 0;
}