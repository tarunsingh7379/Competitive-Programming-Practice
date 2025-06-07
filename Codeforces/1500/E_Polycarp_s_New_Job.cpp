#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    cin >> q;
    int biggest_x = 0, biggest_y = 0;
    while (q--)
    {
        char type;
        cin >> type;
        if (type == '+')
        {
            int x, y;
            cin >> x >> y;
            if (x < y)
                swap(x, y);
            biggest_x = max(biggest_x, x);
            biggest_y = max(biggest_y, y);
        }
        else
        {
            int h, w;
            cin >> h >> w;
            if (h < w)
                swap(h, w);
            cout << ((biggest_x <= h && biggest_y <= w) ? "YES" : "NO") << endl;
        }
    }

    return 0;
}