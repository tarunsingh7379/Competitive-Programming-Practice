#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll x;
    double bal;
    cin >> x >> bal;
    cout << fixed << setprecision(12);
    if (x % 5 == 0 && (bal - x - 0.5) >= 0)
    {
        cout << (bal - x - 0.5) << endl;
    }
    else
    {
        cout << bal << endl;
    }

    return 0;
}