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
        int n, x;
        cin >> n >> x;
        int infected = 0, sum = 0;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            if (val == x)
            {
                infected++;
            }
            sum += val;
        }
        if (infected == n)
        {
            cout << 0 << endl;
        }
        else if (infected > 0)
        {
            cout << 1 << endl;
        }
        else if (sum == n * x)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 2 << endl;
        }
        t--;
    }

    return 0;
}