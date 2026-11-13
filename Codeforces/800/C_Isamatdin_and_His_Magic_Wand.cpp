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
        int odd = 0, even = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] & 1)
                odd++;
            else
                even++;
        }
        if (odd && even)
        {
            sort(a, a + n);
        }
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << "\n";
        t--;
    }

    return 0;
}