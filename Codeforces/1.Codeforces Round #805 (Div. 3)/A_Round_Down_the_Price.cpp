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
        ll n;
        cin >> n;
        string s = to_string(n);
        ll len = s.size();
        ll x = pow(10, len - 1);
        ll ans = n - x;
        cout << ans << endl;
        t--;
    }

    return 0;
}