#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    if (n <= 3)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
        if (n % 2 == 0)
        {
            cout << "1 * 2 = 2" << endl;
            cout << "2 * 3 = 6" << endl;
            cout << "6 * 4 = 24" << endl;
            for (int i = 5; i <= n; i += 2)
            {
                cout << (i + 1) << " - " << i << " = " << 1 << endl;
                cout << "24 * 1 = 24" << endl;
            }
        }
        else
        {
            cout << "2 - 1 = 1" << endl;
            cout << "3 + 1 = 4" << endl;
            cout << "5 * 4 = 20" << endl;
            cout << "20 + 4 = 24" << endl;
            for (int i = 6; i <= n; i += 2)
            {
                cout << (i + 1) << " - " << i << " = " << 1 << endl;
                cout << "24 * 1 = 24" << endl;
            }
        }
    }

    return 0;
}