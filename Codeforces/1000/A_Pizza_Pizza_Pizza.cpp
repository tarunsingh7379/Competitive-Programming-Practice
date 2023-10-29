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
    if (n == 0)
    {
        cout << 0 << endl;
    }
    else if ((n + 1) % 2 == 0)
    {
        cout << (n + 1) / 2 << endl;
    }
    else
    {
        cout << n + 1 << endl;
    }

    return 0;
}