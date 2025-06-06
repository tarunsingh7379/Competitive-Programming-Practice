#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, x, y;
    cin >> n >> x >> y;
    string s;
    cin >> s;
    int start = 0, cnt = 0;
    for (ll i = 0; i < n; i++)
    {
        if (!start && s[i] == '0')
        {
            cnt++;
            start = 1;
        }
        else if (s[i] == '1')
        {
            start = 0;
        }
    }
    if (!cnt)
        cout << 0 << endl;
    else
        cout << (cnt - 1) * min(x, y) + y << endl;

    return 0;
}