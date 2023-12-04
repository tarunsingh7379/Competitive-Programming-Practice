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
        int n;
        cin >> n;
        string s;
        cin >> s;
        ll ans = n - 1;
        for (ll i = 0; i + 2 < n; i++)
        {
            if (s[i] == s[i + 2])
            {
                ans--;
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}