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
        ll d, l, r;
        cin >> d >> l >> r;
        if (d < l)
        {
            cout << "Too Early" << endl;
        }
        else if (d >= l && d <= r)
        {
            cout << "Take second dose now" << endl;
        }
        else
        {
            cout << "Too Late" << endl;
        }
        t--;
    }

    return 0;
}