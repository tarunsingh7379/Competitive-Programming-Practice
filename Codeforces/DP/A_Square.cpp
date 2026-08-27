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
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        cout << ((a == b && a == c && a == d) ? "YES" : "NO") << endl;
        t--;
    }

    return 0;
}