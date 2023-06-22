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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int i = 0, pos = 0, neg = 0;
        while (i < n)
        {
            ll sum = 0;
            while (i < n && a[i] > 0)
            {
                sum += a[i];
                i++;
            }
            if (sum > 0)
            {
                pos++;
            }
            sum = 0;
            while (i < n && a[i] <= 0)
            {
                sum += a[i];
                i++;
            }
            if (sum < 0)
            {
                neg++;
            }
        }
        int mi = min(neg, pos + 1);
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += abs(a[i]);
        }
        cout << sum << " " << mi << endl;
        t--;
    }

    return 0;
}