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

        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        k = min(k, n);
        int last = n - 1;
        int flag = 1;
        for (int i = 0; i < k; i++)
        {
            if (a[last] > n)
            {
                flag = 0;
                break;
            }
            last = (last + (n - a[last])) % n;
        }
        cout << (flag ? "Yes" : "No") << endl;
        t--;
    }

    return 0;
}