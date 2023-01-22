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
    if (n == 1 || n == 2)
    {
        cout << -1 << endl;
    }
    else
    {
        if (n % 2 != 0)
        {
            cout << (n * n - 1) / 2 << " " << (n * n + 1) / 2 << endl;
        }
        else
        {
            cout << (n * n - 4) / 4 << " " << (n * n + 4) / 4 << endl;
        }
    }

    return 0;
}