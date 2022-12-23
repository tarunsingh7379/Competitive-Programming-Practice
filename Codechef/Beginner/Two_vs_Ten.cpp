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
        ll x;
        cin >> x;
        if (x % 10 == 0)
        {
            cout << 0 << endl;
        }
        else if (x % 5 == 0)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
        t--;
    }

    return 0;
}