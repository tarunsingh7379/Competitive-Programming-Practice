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
    int odd1 = 0, odd2 = 0, p = 0, q = 0;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        if (x % 2 != 0)
        {
            odd1++;
        }
        if (y % 2 != 0)
        {
            odd2++;
        }
        if (x % 2 != 0 && y % 2 == 0)
        {
            p++;
        }
        if (y % 2 != 0 && x % 2 == 0)
        {
            q++;
        }
    }
    if (odd1 % 2 == 0 && odd2 % 2 == 0)
    {
        cout << 0 << endl;
    }
    else
    {
        if (odd1 % 2 != 0 && odd2 % 2 != 0 && (p > 0 || q > 0))
        {
            cout << 1 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}