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
        ll ans = (s[0] - '0') + (s[s.size() - 1] - '0');
        cout << ans << endl;
        t--;
    }

    return 0;
}