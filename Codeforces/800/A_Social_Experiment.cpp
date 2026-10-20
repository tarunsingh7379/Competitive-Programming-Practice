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
        if (n <= 3)
        {
            cout << n << endl;
        }
        else if (n & 1)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
        t--;
    }

    return 0;
}