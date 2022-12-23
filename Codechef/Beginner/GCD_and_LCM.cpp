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
        ll a, b;
        cin >> a >> b;
        cout << __gcd(a, b) << " " << (a * b) / __gcd(a, b) << endl;
        t--;
    }

    return 0;
}