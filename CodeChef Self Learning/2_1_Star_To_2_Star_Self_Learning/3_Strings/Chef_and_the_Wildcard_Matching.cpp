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
        string x, y;
        cin >> x >> y;
        ll n = x.size();
        ll flag = 1;
        for (ll i = 0; i < n; i++)
        {
            if (x[i] != y[i] && x[i] != '?' && y[i] != '?')
            {
                flag = 0;
                break;
            }
        }
        cout << (flag ? "Yes" : "No") << endl;
        t--;
    }

    return 0;
}