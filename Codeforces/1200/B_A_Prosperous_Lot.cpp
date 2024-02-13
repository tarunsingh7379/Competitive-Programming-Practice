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
    if (n > 32)
    {
        cout << -1 << endl;
    }
    else
    {
        if (n % 2)
        {
            cout << 4;
            n--;
        }
        for (int i = 0; i < n / 2; i++)
        {
            cout << 8;
        }
        cout << endl;
    }

    return 0;
}