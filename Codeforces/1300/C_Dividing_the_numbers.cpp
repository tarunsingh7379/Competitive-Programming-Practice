#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;

    ll sum = n * (n + 1) / 2;
    cout << sum % 2 << endl;

    ll flag = 0;
    cout << n / 2 << " ";
    for (ll i = n; i > 1; i -= 2)
    {
        cout << i - flag << " ";
        flag ^= 1;
    }

    return 0;
}