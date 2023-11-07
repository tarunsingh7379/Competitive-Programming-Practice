#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, k;
    cin >> n >> k;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    ll sum = 0;
    int cnt = 0;
    for (int i = 0; i < n && cnt < k; i++)
    {
        a[i] -= sum;
        if (a[i] == 0)
        {
            continue;
        }
        cout << a[i] << endl;
        sum += a[i];
        cnt++;
    }
    for (int i = cnt; i < k; i++)
    {
        cout << 0 << endl;
    }
    return 0;
}