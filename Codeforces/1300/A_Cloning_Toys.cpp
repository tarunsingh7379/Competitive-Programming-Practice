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
    ll copied = b - 1;
    if (a < copied || copied < 0)
    {
        cout << "No" << endl;
    }
    else if (a == copied)
    {
        cout << "Yes" << endl;
    }
    else
    {
        ll rem = a - copied;
        if (rem % 2 == 0 && copied > 0)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}