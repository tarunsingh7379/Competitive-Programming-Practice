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
        int n, k, x;
        cin >> n >> k >> x;
        if (x != 1)
        {
            cout << "YES" << endl;
            cout << n << endl;
            for (int i = 0; i < n; i++)
            {
                cout << 1 << " ";
            }
            cout << endl;
        }
        else
        {
            if (n % 2 == 0 && k >= 2)
            {
                cout << "YES" << endl;
                cout << n / 2 << endl;
                for (int i = 0; i < n / 2; i++)
                {
                    cout << 2 << " ";
                }
                cout << endl;
            }
            else if (n % 2 != 0 && k >= 3)
            {
                cout << "YES" << endl;
                cout << n / 2 << endl;
                cout << 3 << " ";
                for (int i = 0; i < n / 2 - 1; i++)
                {
                    cout << 2 << " ";
                }
                cout << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        t--;
    }

    return 0;
}