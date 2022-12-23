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
        string a, b;
        cin >> a >> b;
        ll cnt = 0;
        for (ll i = 0; i < n; i++)
        {
            cnt += (a[i] != b[i]);
        }
        cout << (cnt % 2 == 0 ? 1 : 0) << endl;
        t--;
    }

    return 0;
}