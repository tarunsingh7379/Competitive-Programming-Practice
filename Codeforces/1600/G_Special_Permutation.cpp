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
        int n;
        cin >> n;
        if (n < 4)
        {
            cout << -1 << endl;
        }
        else
        {
            if (n % 2 != 0)
            {
                for (int i = n; i >= 1; i -= 2)
                {
                    cout << i << " ";
                }

                cout << 4 << " " << 2 << " ";

                for (int i = 6; i <= n; i += 2)
                {
                    cout << i << " ";
                }
                cout << endl;
            }
            else
            {
                for (int i = n - 1; i >= 1; i -= 2)
                {
                    cout << i << " ";
                }

                cout << 4 << " " << 2 << " ";

                for (int i = 6; i <= n; i += 2)
                {
                    cout << i << " ";
                }
                cout << endl;
            }
        }
        t--;
    }

    return 0;
}