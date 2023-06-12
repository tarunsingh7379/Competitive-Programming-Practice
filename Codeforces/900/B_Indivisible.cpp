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
        if (n == 1)
        {
            cout << 1 << endl;
        }
        else if (n & 1)
        {
            cout << -1 << endl;
        }
        else
        {
            for (int i = 1; i <= n; i++)
            {
                if (i & 1)
                {
                    cout << i + 1 << " ";
                }
                else
                {
                    cout << i - 1 << " ";
                }
            }
            cout << endl;
        }

        t--;
    }

    return 0;
}