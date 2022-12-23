#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;

    int a, b, c;
    cin >> a >> b >> c;
    int ans = max({a + b + c, a * b * c, a * (b + c), (a + b) * c});
    cout << ans << endl;

    return 0;
}