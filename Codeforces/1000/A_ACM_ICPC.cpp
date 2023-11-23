#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a[6];
    int sum = 0;
    for (int i = 0; i < 6; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    if (sum % 2 == 0)
    {
        int flag = 0;
        for (int i = 0; i < 6; i++)
        {
            for (int j = i + 1; j < 6; j++)
            {
                for (int k = j + 1; k < 6; k++)
                {
                    if (a[i] + a[j] + a[k] == sum / 2)
                    {
                        flag = 1;
                    }
                }
            }
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}