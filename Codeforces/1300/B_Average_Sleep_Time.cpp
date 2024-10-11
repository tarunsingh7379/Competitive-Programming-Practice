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
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll sum = 0, total = 0;
    for (int i = 0; i < k; i++)
    {
        sum += a[i];
    }
    total += sum;
    ll cnt = 1;
    for (int i = k; i < n; i++)
    {
        sum -= a[i - k];
        sum += a[i];
        total += sum;
        cnt++;
    }
    double ans = 1.0 * total / cnt;
    cout << fixed << setprecision(12);
    cout << ans << endl;

    return 0;
}