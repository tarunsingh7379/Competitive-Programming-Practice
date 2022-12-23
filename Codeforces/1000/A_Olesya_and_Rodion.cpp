#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    if (k <= 9)
    {
        cout << k;
        for (int i = 0; i < n - 1; i++)
        {
            cout << 0;
        }
    }
    else
    {
        if (n == 1)
        {
            cout << -1;
        }
        else
        {
            cout << k;
            for (int i = 0; i < n - 2; i++)
            {
                cout << 0;
            }
        }
    }

    return 0;
}