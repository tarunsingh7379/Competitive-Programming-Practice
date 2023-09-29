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
    int a[n][n];
    int x = 1, flag = 1;
    for (int j = 0; j < n; j++)
    {
        if (flag == 1)
            for (int i = 0; i < n; i++)
            {
                a[i][j] = x;
                x++;
            }
        else
            for (int i = n - 1; i >= 0; i--)
            {
                a[i][j] = x;
                x++;
            }
        flag ^= 1;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}