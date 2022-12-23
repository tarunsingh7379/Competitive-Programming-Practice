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
        ll a[4];
        for (ll i = 0; i < 4; i++)
        {
            cin >> a[i];
        }
        sort(a, a + 4);
        if (a[0] == a[1] && a[2] == a[3])
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        t--;
    }

    return 0;
}