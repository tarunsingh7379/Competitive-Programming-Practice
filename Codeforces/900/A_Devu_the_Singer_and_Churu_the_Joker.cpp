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
    int a[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    sum += (n - 1) * 10;
    if (sum > k)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << 2 * (n - 1) + (k - sum) / 5 << endl;
    }

    return 0;
}