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
        sort(a, a + n);
        int cnt_0 = 0, cnt_1 = 0, cnt_2 = 0;
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0)
            {
                cnt_0++;
            }
            else if (a[i] == 1)
            {
                cnt_1++;
            }
            if (i < n - 1 && abs(a[i] - a[i + 1]) == 1)
            {
                flag = 1;
            }
        }
        if (cnt_1 == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            if (flag == 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        t--;
    }

    return 0;
}