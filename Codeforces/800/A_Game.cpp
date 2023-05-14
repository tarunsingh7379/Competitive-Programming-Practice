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
        int left = 0, right = n - 1;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 1)
            {
                left = i;
            }
            else
            {
                break;
            }
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (a[i] == 1)
            {
                right = i;
            }
            else
            {
                break;
            }
        }

        cout << max(0, right - left) << endl;
        t--;
    }

    return 0;
}