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
        string s;
        for (ll i = 9; i >= 1; i--)
        {
            if (i <= n)
            {
                n -= i;
                s += to_string(i);
            }
        }
        sort(s.begin(), s.end());
        cout << s << endl;
        t--;
    }

    return 0;
}