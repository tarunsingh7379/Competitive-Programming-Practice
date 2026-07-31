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
        int even = 0, odd = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x & 1)
            {
                odd++;
            }
            else
            {
                even++;
            }
        }
        if (odd % 2 == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        t--;
    }

    return 0;
}