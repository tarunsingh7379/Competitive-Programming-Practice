#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    ll ans = 0;
    if ((s[0] - '0') % 4 == 0)
    {
        ans++;
    }
    for (ll i = 1; i < s.size(); i++)
    {
        string temp = s.substr(i - 1, 2);
        int x = stoi(temp);
        if (x % 4 == 0)
        {
            ans = ans + i;
        }
        if ((s[i] - '0') % 4 == 0)
        {
            ans++;
        }
    }
    cout << ans << endl;

    return 0;
}