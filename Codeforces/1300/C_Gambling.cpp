#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    ll a[n], b[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    sort(a, a + n);
    sort(b, b + n);
    int i = n - 1, j = n - 1, turn = 1;
    ll sum1 = 0, sum2 = 0;
    while (i >= 0 && j >= 0)
    {
        if (turn)
        {
            if (a[i] > b[j])
            {
                sum1 += a[i];
                i--;
            }
            else
            {
                j--;
            }
        }
        else
        {
            if (a[i] < b[j])
            {
                sum2 += b[j];
                j--;
            }
            else
            {
                i--;
            }
        }
        turn ^= 1;
    }
    while (i >= 0)
    {
        if (turn)
        {
            sum1 += a[i];
            i--;
        }
        else
        {
            i--;
        }
        turn ^= 1;
    }
    while (j >= 0)
    {
        if (!turn)
        {
            sum2 += b[j];
            j--;
        }
        else
        {
            j--;
        }
        turn ^= 1;
    }
    cout << sum1 - sum2 << endl;
    return 0;
}