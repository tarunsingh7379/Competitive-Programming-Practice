#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll a, b;
    cin >> a >> b;
    ll g = __gcd(a, b);
    ll l = (a * b) / g;
    ll dasha = l / a - 1;
    ll masha = l / b - 1;
    if (dasha < masha)
    {
        dasha++;
    }
    else
    {
        masha++;
    }
    if (dasha > masha)
    {
        cout << "Dasha" << endl;
    }
    else if (dasha == masha)
    {
        cout << "Equal" << endl;
    }
    else
    {
        cout << "Masha" << endl;
    }

    return 0;
}