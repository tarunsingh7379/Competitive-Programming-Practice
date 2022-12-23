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
        ll w1, w2, x1, x2, m;
        cin >> w1 >> w2 >> x1 >> x2 >> m;
        ll d = w2 - w1;
        ll mi = x1 * m;
        ll ma = x2 * m;
        if (d >= mi && d <= ma)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
        t--;
    }

    return 0;
}