#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, total_sum;
    cin >> n >> total_sum;
    int a[n], b[n];
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
        sum1 += a[i];
        sum2 += b[i];
    }
    if (total_sum >= sum1 && total_sum <= sum2)
    {
        cout << "YES" << endl;
        for (int i = 0; i < n; i++)
        {
            int x = min(total_sum - sum1 + a[i], b[i]);
            cout << x << " ";
            total_sum -= x;
            sum1 -= a[i];
        }
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}