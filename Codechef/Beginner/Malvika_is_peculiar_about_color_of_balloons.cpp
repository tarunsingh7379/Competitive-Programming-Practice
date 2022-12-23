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
        string s;
        cin >> s;
        ll a = count(s.begin(), s.end(), 'a');
        ll b = count(s.begin(), s.end(), 'b');
        ll ans = min(a, b);
        cout << ans << endl;
        t--;
    }

    return 0;
}