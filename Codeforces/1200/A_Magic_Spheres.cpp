#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll a, b, c;
    cin >> a >> b >> c;
    ll p, q, r;
    cin >> p >> q >> r;
    ll needed = max(0LL, p - a) + max(0LL, q - b) + max(0LL, r - c);
    ll extra = max(0LL, a - p) / 2 + max(0LL, b - q) / 2 + max(0LL, c - r) / 2;
    if (needed > extra)
    {
        cout << "No" << endl;
    }
    else
    {
        cout << "Yes" << endl;
    }

    return 0;
}