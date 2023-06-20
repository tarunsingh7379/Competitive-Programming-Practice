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
        string a, b;
        cin >> a >> b;
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        if (a.size() < b.size())
        {
            a += string(b.size() - a.size(), '0');
        }
        else
        {
            b += string(b.size() - a.size(), '0');
        }

        if (a == b)
        {
            cout << 0 << endl;
        }
        else
        {
            while (a.back() == b.back())
            {
                a.pop_back();
                b.pop_back();
            }
            ll ans = abs(a.back() - b.back());
            ans = ans + 9 * (a.size() - 1);
            cout << ans << endl;
        }

        t--;
    }

    return 0;
}