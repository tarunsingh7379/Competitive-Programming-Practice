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
        ll n, m, k;
        cin >> n >> m >> k;
        ll diff = abs(n - m);
        diff = diff - k;
        if (diff < 0)
        {
            diff = 0;
        }
        cout << diff << endl;
        t--;
    }

    return 0;
}