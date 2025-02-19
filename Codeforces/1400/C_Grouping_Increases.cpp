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
        int first_last = 1e9, second_last = 1e9, ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (first_last > second_last)
            {
                swap(first_last, second_last);
            }
            if (a[i] <= first_last)
            {
                first_last = a[i];
            }
            else if (a[i] <= second_last)
            {
                second_last = a[i];
            }
            else
            {
                first_last = a[i];
                ans++;
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}