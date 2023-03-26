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
        int sum1 = 0, sum2 = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x % 2 == 0)
            {
                sum1 += x;
            }
            else
            {
                sum2 += x;
            }
        }
        if (sum1 > sum2)
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