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
        int k, x;
        cin >> k >> x;
        ll ans = k * x + 1;
        cout << ans << "\n";
        t--;
    }

    return 0;
}