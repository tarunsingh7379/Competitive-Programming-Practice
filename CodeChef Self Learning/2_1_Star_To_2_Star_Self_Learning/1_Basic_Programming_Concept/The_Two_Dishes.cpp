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
        ll n, s;
        cin >> n >> s;
        if (n >= s)
        {
            cout << s << endl;
        }
        else
        {
            cout << 2 * n - s << endl;
        }
        t--;
    }

    return 0;
}