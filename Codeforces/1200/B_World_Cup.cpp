#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, a, b;
    cin >> n >> a >> b;
    a--;
    b--;
    ll ans = 0;
    while (n)
    {
        a /= 2;
        b /= 2;
        ans++;
        if (a == b)
        {
            if (n == 2)
            {
                cout << "Final!" << endl;
                break;
            }
            cout << ans << endl;
            break;
        }
        n /= 2;
    }

    return 0;
}