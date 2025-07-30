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
    ll n = s.size();
    ll ans = 1, cnt = 1;
    for (int i = 1; i < n; i++)
    {
        if (s[i] - '0' + s[i - 1] - '0' == 9)
        {
            cnt++;
        }
        else
        {
            if (cnt > 1 && cnt % 2 != 0)
            {
                ans *= (cnt / 2 + 1);
            }
            cnt = 1;
        }
    }
    if (cnt > 1 && cnt % 2 != 0)
    {
        ans *= (cnt / 2 + 1);
    }
    cout << ans << endl;

    return 0;
}