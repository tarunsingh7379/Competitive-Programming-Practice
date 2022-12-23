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
        ll a[3];
        for (ll i = 0; i < 3; i++)
        {
            cin >> a[i];
        }
        sort(a, a + 3);
        cout << a[1] << endl;
        t--;
    }

    return 0;
}