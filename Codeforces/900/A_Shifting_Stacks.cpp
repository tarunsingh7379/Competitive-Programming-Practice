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
        ll a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll have = a[0];
        ll flag = 1;
        for (ll i = 1; i < n; i++)
        {
            if (a[i] + have < i)
            {
                flag = 0;
                break;
            }
            have = a[i] + have - i;
        }
        cout << (flag ? "YES" : "NO") << endl;
        t--;
    }

    return 0;
}