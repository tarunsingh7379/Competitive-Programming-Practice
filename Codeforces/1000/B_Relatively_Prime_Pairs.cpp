#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll l, r;
    cin >> l >> r;
    cout << "YES" << endl;
    for (ll i = l; i <= r; i += 2)
    {
        cout << i << " " << i + 1 << endl;
    }

    return 0;
}