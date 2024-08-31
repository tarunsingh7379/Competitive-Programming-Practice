#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

// 1 5
// 2 6
// 3 4

// 1 8
// 2 9
// 3 10
// 4 6
// 5 7

// 1 11
// 2 12
// 3 13
// 4 14
// 5 8
// 6 9
// 7 10

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

        if (n % 2 == 0)
        {
            cout << "No" << endl;
        }
        else
        {
            int a[n], b[n];
            for (int i = 0; i < n; i++)
            {
                a[i] = i + 1;
            }
            int cnt = 2 * n;
            for (int i = n / 2; i >= 0; i--)
            {
                b[i] = cnt;
                cnt--;
            }
            for (int i = n - 1; i > n / 2; i--)
            {
                b[i] = cnt;
                cnt--;
            }
            cout << "Yes" << endl;
            for (int i = 0; i < n; i++)
            {
                cout << a[i] << " " << b[i] << endl;
            }
        }

        t--;
    }

    return 0;
}