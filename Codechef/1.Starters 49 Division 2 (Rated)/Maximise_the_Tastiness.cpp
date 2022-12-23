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
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        cout << max(a, b) + max(c, d) << endl;
        t--;
    }

    return 0;
}