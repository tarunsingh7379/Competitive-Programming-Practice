#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, n;
    cin >> a >> b >> n;

    for (int x = -1000; x <= 1000; x++)
    {
        ll z = a;
        for (int i = 0; i < n; i++)
        {
            z *= x;
            if (z > INT_MAX)
            {
                break;
            }
        }
        if (z == b)
        {
            cout << x << endl;
            return 0;
        }
    }
    cout << "No solution" << endl;

    return 0;
}