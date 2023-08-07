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
        int left_ind = 0, left_mi = a[0], flag = 0;
        for (int i = 1; i < n - 1; i++)
        {
            if (left_mi < a[i])
            {
                for (int j = i + 1; j < n; j++)
                {
                    if (a[j] < a[i])
                    {
                        cout << "YES" << endl;
                        cout << left_ind + 1 << " " << i + 1 << " " << j + 1 << endl;
                        flag = 1;
                        break;
                    }
                }
            }
            if (flag == 1)
            {
                break;
            }
            if (a[i] < left_mi)
            {
                left_mi = a[i];
                left_ind = i;
            }
        }
        if (flag == 0)
        {
            cout << "NO" << endl;
        }
        t--;
    }

    return 0;
}