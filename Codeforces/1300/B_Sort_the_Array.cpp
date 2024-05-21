#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (is_sorted(a, a + n))
    {
        cout << "yes" << endl;
        cout << 1 << " " << 1 << endl;
    }
    else
    {
        reverse(a, a + n);
        if (is_sorted(a, a + n))
        {
            cout << "yes" << endl;
            cout << 1 << " " << n << endl;
        }
        else
        {
            reverse(a, a + n);
            int l = 0;
            while (l < n - 1 && a[l] <= a[l + 1])
            {
                l++;
            }
            int r = n - 1;
            while (r > 0 && a[r] >= a[r - 1])
            {
                r--;
            }
            reverse(a + l, a + r + 1);
            if (is_sorted(a, a + n))
            {
                cout << "yes" << endl;
                cout << l + 1 << " " << r + 1 << endl;
            }
            else
            {
                cout << "no" << endl;
            }
        }
    }

    return 0;
}